#include<iostream>
using namespace std;

/**
 * A中默认禁止析构函数抛出异常
 */
struct A{
    ~A(){throw 1;} // 默认禁止抛出异常
};

/**
 * B中显示允许析构函数抛出异常
 */
struct B{
    ~B()noexcept(false){throw 2;} // 允许抛出异常
};

/**
 * C中有成员存在noexcept(false)的析构函数，所以C析构
 * 函数允许抛出异常
 */
struct C{
    B b;
};

int funcA(){A a;}
int funcB(){B b;}
int funcC(){C c;}

int main(){
    try{
        funcB();
    }catch(...){
        cout<<"caught funB."<<endl; // caught funB.
    }
    try{
        funcC();
    }catch(...){
        cout<<"caught funC."<<endl; // caught funC.
    }
    try{
        funcA(); // terminate called after throwing an instance of 'int'
    }catch(...){
        cout<<"caught funA."<<endl; // caught funB.
    }
}

// 编译选项： g++ -std=c++11 2-6-2.cpp