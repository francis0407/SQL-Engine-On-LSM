
#pragma once

#include <queue>
#include <unordered_map>
#include "Operator.h"

namespace simplesql{
namespace operators {

enum JoinSide {
    BuildLeft,
    BuildRight
};

enum JoinMethod {
    HashJoin,
    NestedLoopJoin,
    MergeJoin
};

class InnerJoin: public OperatorBase {
public:
    InnerJoin(OperatorBase* _left, OperatorBase* _right, JoinSide _side, ExpressionBase* _condition = nullptr, JoinMethod _method = NestedLoopJoin); // TODO: Join
    virtual ~InnerJoin();
    
    bool open() override;
    NextResult next() override;
    bool close() override;
    virtual bool equalTo(OperatorBase* that) const override;

    OperatorBase* &left;
    OperatorBase* &right;

    ExpressionBase* condition = nullptr;
    JoinSide side;
    JoinMethod method;

    int leftKeyOffset, rightKeyOffset;
private:
    //  NestedLoopJoin
    bool nestedLoopOpen();
    NextResult nestedLoopNext();
    bool nestedLoopClose();
    NextResult streamNext;

    //  MergeJoin
    bool mergeOpen();
    NextResult mergeNext();
    bool mergeClose();
    std::vector<Row*> buildBuffer;
    Row* buildRowBuffer;
    std::queue<Row*> resultBuffer;
    int buildKeyOffset, streamKeyOffset;
    OperatorBase *stream, *build;
    MemoryPool* mergeMP;

    //  HashJoin
    bool hashOpen();
    NextResult hashNext();
    bool hashClose();
    std::unordered_multimap<AnyValuePointer, Row*, AnyValueHash, AnyValueCmp> multiHashMap;
    MemoryPool* hashMP;
    std::queue<NextResult> hashResultBuffer;

};


}} // namespace simplesql::operators