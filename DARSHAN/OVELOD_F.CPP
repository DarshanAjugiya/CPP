#include <iostream>
using namespace std;

class emp {
public:
    int a, b;

    emp() {}  // Default constructor

    emp(int x, int y) {
        a = x;
        b = y;
    }

    void show() {
        cout << "a == " << a << endl;
        cout << "b == " << b << endl;
    }

    // Declare friend function to allow access to private members
    friend emp operator+(emp e1, emp e2);
};

// Operator overloading for +
emp operator+(emp e1, emp e2) {
    emp obj;
    obj.a = e1.a + e2.a;
    obj.b = e1.b + e2.b;
    return obj;
}

int main() {
    emp s1(10, 20);
    emp s2(30, 40);
    emp s3 = s1 + s2;

    s3.show();

    return 0;
}
