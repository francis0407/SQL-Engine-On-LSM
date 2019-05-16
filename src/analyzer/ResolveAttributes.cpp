
#include "expressions/AttributeReference.h"
#include "expressions/Literal.h"
#include "analyzer/Analyzer.h"
#include "analyzer/AnalysisException.h"
#include "operators/Scan.h"
#include "operators/Operator.h"
#include "operators/Filter.h"
#include "operators/Project.h"
#include "operators/Join.h"
#include "operators/CreateTable.h"

using namespace simplesql::analyzer;
 
std::function<ExpressionBase*(ExpressionBase*)> ResolveAttributes::resolveAttributes(AttributeSeq* attrs) {
    return [attrs](ExpressionBase* expr) -> ExpressionBase* {
        switch (expr->type) {
            case _AttributeReference: {
                AttributeReference* ref = (AttributeReference*) expr;
                Attribute* attr = attrs->findAttribute(ref->reference);
                if (attr != nullptr) {
                    ref->reference = *attr;
                    ref->resolved = true;
                    ref->dataType = ref->reference.dataType;
                }
                break;
            }
            case _Literal: {
                expr->resolved = true;
                expr->dataType = ((Literal*)expr)->value->valueType;
                break;
            }
            default: {
                if (expr->isBinaryExpression())
                    expr->resolved = expr->children[0]->resolved && expr->children[1]->resolved;
                else if (expr->isUnaryExpression())
                    expr->resolved = expr->children[0]->resolved;
            }
        }
        expr->resolveDataType();
        return expr;
    };
}

OperatorBase* ResolveAttributes::apply(OperatorBase* opt) {
    switch (opt->type) {
        case _Scan: {
            opt->outputs = ((Scan*)opt)->reference->attributes;
            opt->resolved = true;     
            break;
        }
        case _Filter: {
            Filter* filter = (Filter*)opt;
            filter->condition->transform(resolveAttributes(&filter->child->outputs));
            if (!filter->condition->resolved) {
                throw AnalysisException(
                    std::string("Can't resolve the condition ") + filter->condition->toString());
            }
            filter->resolved =  true;
            filter->outputs = filter->child->outputs;
            break;
        }
        case _Project: {
            Project* project = (Project*)opt;
            project->resolved = true;
            for (auto iter : project->projectList) {
                iter->transform(resolveAttributes(&project->child->outputs));
                project->resolved &= iter->resolved;
            }
            if (!project->resolved) {
                throw AnalysisException(
                    std::string("Can't resolve the project list ") + project->projectString());
            }
            project->outputs.clean();

            for (auto iter : project->projectList)
                if (iter->isAttributeReference()) {
                    AttributeReference* ref = (AttributeReference*) iter;
                    project->outputs.append(ref->reference);
                } else {
                    project->outputs.append(Attribute(iter->dataType, 0, iter->toString()));
                }
            break; 
        }
        case _InnerJoin: {
            InnerJoin* join = (InnerJoin*)opt;
            // TODO: detect confilct attributes
            join->condition->transform(resolveAttributes(&join->left->outputs));
            join->condition->transform(resolveAttributes(&join->right->outputs));
            if (!join->condition->resolved) {
                throw AnalysisException(
                    std::string("Can't resolve join condition ") + join->condition->toString());
            }
            join->resolved = true;
            join->outputs = join->left->outputs;
            join->outputs += join->right->outputs;
            break;
        }
        case _CreateTable: {
            CreateTable* ct = (CreateTable*)opt;
            auto &attrs = ct->attrs;
            auto &index = ct->index;
            // resolve names
            size_t num = attrs.size();
            if (num == 0) throw AnalysisException("Unknown Exception: 0");
            for (size_t i = 0; i < num; i++)
                for (size_t j = i + 1; j < num; j++) 
                    if (attrs[i]->name == attrs[j]->name)
                        throw AnalysisException("Same Attribute Name");
            // resolve types
            for (size_t i = 0; i < num; i++)
                if (attrs[i]->dataType == Unresolved)
                    throw AnalysisException("Unknown DataType");
            // resolve indexes
            for (size_t i = 0; i < index.size(); i++) {
                bool find = false;
                for (size_t j = 0; j < num; j++) {
                    if (index[i] == attrs[j]->name) {
                        attrs[j]->hasIndex = true;
                        find = true;
                        break;
                    }
                }
                if (!find) throw AnalysisException("Unknown Index Name");
            }
            break;
        }
        default: {
            break;
        }
    }
    return opt;
}