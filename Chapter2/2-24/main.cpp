struct Object{
    virtual void fun()=0;
};

struct Base: public Object{
    virtual void fun() final{}; // 声明为final
};

struct Derived: public Base{
    virtual void func(){}; // 无法通过编译
};

// 编译选项： g++ -c -std=c++11 2-10-2.cpp