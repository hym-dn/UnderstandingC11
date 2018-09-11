struct A {
    A (int a = 3, double = 2.4){}
};

struct B : A{
    using A::A;
};

// 构造函数参数默认值，会导致多个构造函数版本的产生