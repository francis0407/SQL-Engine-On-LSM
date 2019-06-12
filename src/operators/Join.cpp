
#include "operators/Join.h"
#include "expressions/Literal.h"  

using namespace simplesql::expressions;
using namespace simplesql::operators;

InnerJoin::InnerJoin(
    OperatorBase* _left, 
    OperatorBase* _right, 
    JoinSide _side, 
    ExpressionBase* _condition,
    JoinMethod _method) : OperatorBase(_InnerJoin), left(children[0]), right(children[1]) {

    left = _left;
    right = _right;
    side = _side;
    condition = _condition == nullptr? Literal::create(true) : _condition;
    method = _method;
}

InnerJoin::~InnerJoin() {
    if (left != nullptr)
        delete left;
    if (right != nullptr)
        delete right;
    if (condition != nullptr)
        delete condition;
}

bool InnerJoin::equalTo(OperatorBase* that) const {
    InnerJoin* _that = (InnerJoin*)that;
    if (that->type != _InnerJoin)
        return false;
    if (!condition->equalTo(_that->condition))
        return false;
    if (!left->equalTo(_that->left))
        return false;
    if (!right->equalTo(_that->right))
        return false;
    return true;
}

bool InnerJoin::open() {
    switch (method) {
        case NestedLoopJoin:
            return nestedLoopOpen();
        default:
            return false;
    }
}

bool InnerJoin::close() {
    switch (method) {
        case NestedLoopJoin:
            return nestedLoopClose();
        default:
            return false;
    }
}

NextResult InnerJoin::next() {
    switch (method) {
        case NestedLoopJoin:
            return nestedLoopNext();
        default:
            return NextResult(nullptr);
    }
}

/************ Nested Loop Inner Join ************/
bool InnerJoin::nestedLoopOpen() {
    if (!(left->open() && right->open())) return false;
    if (side == BuildLeft)
        streamNext = right->next();
    else
        streamNext = left->next();
    if (side == BuildLeft) {
        build = left;
        stream = right;
    } else {
        build = right;
        stream = left;
    }
    return true;
}

bool InnerJoin::nestedLoopClose() {
    return left->close() && right->close();
}

NextResult InnerJoin::nestedLoopNext() {
    while (streamNext.row != nullptr) {            
        while (true) {
            NextResult buildNext = build->next();
            if (buildNext.row == nullptr) break;
            Row* concatRow;
            if (side == BuildLeft) concatRow = Row::concat(buildNext.row, streamNext.row, buildNext.mp);
            else concatRow = Row::concat(streamNext.row, buildNext.row, buildNext.mp);
            // probe
            bool valid = condition->eval(concatRow, buildNext.mp)->asBoolean();
            if (valid) return NextResult(concatRow, buildNext.mp);
        }
        build->close();
        build->open();
        streamNext = stream->next();
    }
    return NextResult(nullptr);
}

/************ Hash Inner Join ****************/
bool InnerJoin::hashOpen() {
    if (!(left->open() && right->open())) return false;
    if (side == BuildLeft) {
        build = left;
        stream = right;
        buildKeyOffset = leftKeyOffset;
        streamKeyOffset = rightKeyOffset;
    } else {
        build = right;
        stream = left;
        buildKeyOffset = rightKeyOffset;
        streamKeyOffset = leftKeyOffset;
    }
    // build hash map
    auto iter = multiHashMap.find(nullptr);
    
}

/************ Sort Merge Inner Join ************/
bool InnerJoin::mergeOpen() {
    if (!(left->open() && right->open())) return false;
    if (side == BuildLeft) {
        build = left;
        stream = right;
        buildKeyOffset = leftKeyOffset;
        streamKeyOffset = rightKeyOffset;
    } else {
        build = right;
        stream = left;
        buildKeyOffset = rightKeyOffset;
        streamKeyOffset = leftKeyOffset;
    }
    if (mergeMP != nullptr) {
        delete mergeMP;
        mergeMP = nullptr;
    }
    mergeMP = new MemoryPool();
    NextResult result = build->next();
    if (result.row != nullptr) {
        buildBuffer.push_back(result.row->makeCopy(mergeMP));
        while (true) {
            NextResult temp = build->next();
            if (temp.row == nullptr) break;
            if (temp.row->values[streamKeyOffset]->equalToSemantically(buildBuffer[0]->values[buildKeyOffset])) {
                buildBuffer.push_back(temp.row->makeCopy(mergeMP));
            } else {
                buildRowBuffer = temp.row->makeCopy(mergeMP);
                break;
            }
        }
    }
    return true;
}

NextResult InnerJoin::mergeNext() {
    // Step 1: check result buffer
    if (resultBuffer.empty()) {
        // fill the result buffer
        NextResult streamResult = stream->next();
        if (streamResult.row == nullptr) return NextResult(nullptr);
        
    }
    if (!resultBuffer.empty()) {

    }
    return NextResult(nullptr);
}