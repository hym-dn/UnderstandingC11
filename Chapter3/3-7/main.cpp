struct A { A(int) {} };
struct B { B(int) {} };

struct C: A, B {
    using A::A;
    using B::B; 
}; 

// 构造函数冲突