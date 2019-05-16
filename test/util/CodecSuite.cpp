#include "gtest/gtest.h"

#include "datatypes/ValueBase.h"
#include "util/Codec.h"


using namespace simplesql;
using namespace simplesql::datatypes;
using namespace simplesql::util;

class CodecSuite : public testing::Test {
public:
    void assertOrders(string& s1, string& s2, string& s3) {
        ASSERT_TRUE(s1.compare(s2) < 0);
        ASSERT_TRUE(s2.compare(s3) < 0);
        s1.clear(); s2.clear(); s3.clear();
    }
};

TEST_F(CodecSuite, ValueEnCode) {
    string s1, s2, s3;
    encodeInt(10, s1);
    encodeInt(15, s2);
    encodeInt(200, s3);
    assertOrders(s1, s2, s3);

    encodeInt(-100000000, s1);
    encodeInt(0, s2);
    encodeInt(1000000, s3);
    assertOrders(s1, s2, s3);

    encodeInt(-700000, s1);
    encodeInt(-900, s2);
    encodeInt(900, s3);
    assertOrders(s1, s2, s3);

    encodeFloat(-10.0f, s1);
    encodeFloat(-1.0f, s2);
    encodeFloat(0.0f, s3);
    assertOrders(s1, s2, s3);

    encodeFloat(-20.0f, s1);
    encodeFloat(20.0f, s2);
    encodeFloat(40.0f, s3);
    assertOrders(s1, s2, s3);
}

TEST_F(CodecSuite, ValueDecode) {
    string s1;
    encodeInt(100, s1);
    ASSERT_EQ(decodeInt(s1), 100);
    s1.clear();
    
    encodeInt(-20, s1);
    ASSERT_EQ(decodeInt(s1), -20);
    s1.clear();

    encodeFloat(100.0f, s1);
    ASSERT_EQ(decodeFloat(s1), 100.0f);
    s1.clear();

    encodeFloat(-200.0f, s1);
    ASSERT_EQ(decodeFloat(s1), -200.0f);
    s1.clear();
}

TEST_F(CodecSuite, RowEncodeDecode) {
    AttributeSeq attrs;
    attrs.append(Attribute(Integer, "A1"));
    attrs.append(Attribute(String, "A2"));
    attrs.append(Attribute(String, "A3"));
    attrs.append(Attribute(Float, "A4"));
    MemoryPool mp;
    AnyValue* values[4];
    values[0] = IntegerValue::create(4, &mp);
    values[1] = StringValue::create(string("abcdefg"), &mp);
    values[2] = StringValue::create(string("qq11231421421"), &mp);
    values[3] = FloatValue::create(-100.0f, &mp);
    Row* row = Row::create(values, 4, &mp);
    string s;
    encodeRowValue(row, s);
    Row* r2;
    decodeRowValue(s, attrs, r2, &mp);
    ASSERT_TRUE(values[0]->equalToSemantically(r2->values[0]));
    ASSERT_TRUE(values[1]->equalToSemantically(r2->values[1]));
    ASSERT_TRUE(values[2]->equalToSemantically(r2->values[2]));
    ASSERT_TRUE(values[3]->equalToSemantically(r2->values[3]));
}
