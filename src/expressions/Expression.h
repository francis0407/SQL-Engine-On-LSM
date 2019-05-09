
#pragma once

#include <sstream>
#include <functional>

#include "Row.h"
#include "MemoryPool.h"
#include "datatypes/ValueBase.h"
#include "expressions/EvaluationException.h"

namespace simplesql {

using namespace datatypes;

namespace expressions {
    
enum ExpressionType {
    _UnknownType,
    _AttributeReference,
    _Literal,
    // Comparison expressions
    _EqualTo,
    _LessThan,
    _LessThanOrEqual,
    _GreaterThan,
    _GreaterThanOrEqual,
    // Predicates
    _And,
    _Or,
    _Not,
    // Arithmetical expressions
    _UnaryMinus,
    _Add,
    _Minus,
    _Multiply,
    _Divide,
    _Mod
};


class ExpressionBase {
public:
    ExpressionBase(ExpressionType _type);
    virtual ~ExpressionBase();
    virtual AnyValue* eval(Row* r, MemoryPool* _mp) = 0;
    AnyValue* eval(Row* r); // use a default memory pool


    DataType dataType;
    const ExpressionType type;
    ExpressionBase* children[2]; // Currently, we only support LeafNode, UnaryNode and BinaryNode. 

    bool resolved = false; // true if the attributes are resolved

    bool isAttributeReference() const;

    virtual bool equalTo(ExpressionBase* that) const;
    virtual std::string toString() const;
    virtual bool isLeafExpression() const;
    virtual bool isUnaryExpression() const;
    virtual bool isBinaryExpression() const;
    virtual void resolveDataType();
    void checkNullResult(AnyValue* v);
    void checkNullResult(AnyValue* v1, AnyValue* v2);
    void throwErrorType(DataType inputType);
    void throwErrorType(DataType inputType1, DataType inputType2);

    virtual ExpressionBase* transform(const std::function<ExpressionBase*(ExpressionBase*)>& func) = 0;
};

class LeafExpression: public ExpressionBase {
public:
    LeafExpression(ExpressionType _type);
    virtual ~LeafExpression();
    virtual bool isLeafExpression() const override;
    virtual ExpressionBase* transform(const std::function<ExpressionBase*(ExpressionBase*)>& func) override;
    // Literals or AttributeReferences
};

class UnaryExpression: public ExpressionBase {
public:
    UnaryExpression(ExpressionBase* _child, ExpressionType _type);
    virtual ~UnaryExpression();
    ExpressionBase* &child;
    virtual bool isUnaryExpression() const override;
    virtual ExpressionBase* transform(const std::function<ExpressionBase*(ExpressionBase*)>& func) override;
};

class BinaryExpression: public ExpressionBase {
public:
    BinaryExpression(ExpressionBase* _left, ExpressionBase* _right, ExpressionType _type);
    virtual ~BinaryExpression();
    ExpressionBase* &left;
    ExpressionBase* &right;
    virtual bool isBinaryExpression() const override;
    virtual ExpressionBase* transform(const std::function<ExpressionBase*(ExpressionBase*)>& func) override;
};


inline void ExpressionBase::checkNullResult(AnyValue* v) {
    if (v == nullptr) 
        throw EvaluationException(
                std::string("nullptr in Expression:") + std::to_string(type) + " " + toString());
}

inline void ExpressionBase::checkNullResult(AnyValue* v1, AnyValue* v2) {
    if (v1 == nullptr || v2 == nullptr) 
        throw EvaluationException(
                std::string("nullptr in Expression:") + std::to_string(type) + " " + toString());
}

inline void ExpressionBase::throwErrorType(DataType inputType) {
    throw EvaluationException(
        std::string("Wrong input type:") + std::to_string(inputType) 
            + "in Expression: " + std::to_string(type) + " " + toString()
    );
}

inline void ExpressionBase::throwErrorType(DataType inputType1, DataType inputType2) {
    throw EvaluationException(
        std::string("Wrong input type:") + std::to_string(inputType1) + "," + std::to_string(inputType2)
            + "in Expression: " + std::to_string(type) + " " + toString()
    );
}

}} // namespace simplesql::expressions