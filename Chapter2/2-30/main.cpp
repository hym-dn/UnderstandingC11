template<typename T> class X{};
template<typename T> void TempFun(T t){};
struct A{} a;
struct {int i;} b; // b是匿名类型变量
typedef struct {int i;} B; // B是匿名类型

void Fun(){
    struct C{} c; // c是局部类型
    X<A> x1; // c++98 通过，c++11 通过
    X<B> x2; // c++98 错误，c++11 通过
    X<C> x3; // c++98 错误，c++11 通过
    TempFun(a); // c++98 通过,c++11 通过
    TempFun(b); // c++98 错误，c++11 通过
    TempFun(c); // c++98 错误，c++11 通过 
}

// 编译选项： g++ -std=c++11 2-13-1.cpp