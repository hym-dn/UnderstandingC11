#include<string>
using namespace std;

struct C{
    C(int i):c(i){};
    int c;
};

struct init{
    int a=1;
    string b("hello"); // 无法编译通过
    C c(1); // 无法编译通过
};

// 编译选项： g++ -std=c++11 -c 2-7-2.cpp