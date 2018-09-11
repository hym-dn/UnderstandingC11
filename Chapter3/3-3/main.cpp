#include <iostream>
using namespace std;

// 基类
struct Base {
    void f(double i){ cout << "Base:" << i << endl; }
};

// 派生类
struct Derived : Base {
    // 引用基类函数
    using Base::f;
    // 重载相应函数
    void f(int i) { cout << "Derived:" << i << endl; }
};

int main() {
    // 基类
    Base b;
    b.f(4.5);  // Base:4.5

    // 派生类
    Derived d;
    d.f(4.5);  // Base:4.5
}

// 编译选项: g++ 3-1-3.cpp