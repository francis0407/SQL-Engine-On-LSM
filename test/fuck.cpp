#include <iostream>
#include <exception>

using namespace std;

void test2() {
    try {
        int y = 1;
        throw std::runtime_error("aaa");
    } catch (std::runtime_error& e) {
        cout << "test2222";
        throw e;
    } //final {
    
    cout << "test2";
    // }
}

void test1() {
    try {
        int y = 1;
        test2();
    } catch (std::runtime_error& e) {
        cout << "test111";
        throw e;
    }
}


// class Base {
// public:
//     virtual void x() = 0;
// };

// class PPP : public Base {
// public:
//     PPP(int _x);
//     virtual void x() override;
// };
class ExpressionBase {
public:
    
    virtual int* eval(int* r, int* _mp) = 0;
    int* eval(double* r); // use a default memory pool

    ExpressionBase* children[2]; // Currently, we only support LeafNode, UnaryNode and BinaryNode. 

    bool resolved = false; // true if the attributes are resolved

    bool isAttributeReference() const;
};
class AttributeReference : public ExpressionBase {
public:
    AttributeReference(const string& _name);
    AttributeReference(const string& _name, const string& _table);

    virtual int* eval(int* r,int* mp);

    // Attribute reference;
};

int main() {
    // Base* b = new PPP(0);
    ExpressionBase* eb = new AttributeReference("123");
    try {
        int x = 0;
        test1();
        // throw std::runtime_error("fuck");
    } catch (std::runtime_error& e) {
        cout << "error";
        std::cout << e.what();
    } catch (std::exception& e) {
        std::cout << e.what();
    }

}