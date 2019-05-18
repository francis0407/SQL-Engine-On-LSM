
#include "operators/Operator.h"

using namespace simplesql::operators;


bool OperatorBase::isLeafOperator() const {
    return type == _Scan || type == _CreateTable || type == _CopyFile;
}

bool OperatorBase::isUnaryOperator() const {
    return type == _Filter || type == _Project;
} 

bool OperatorBase::isBinaryOperator() const {
    return type == _InnerJoin;
}

long long OperatorBase::fastHash() const {
    long long result = 0;
    return result; // TODO
}