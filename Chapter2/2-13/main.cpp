#include<iostream>
using namespace std;

struct A{
    ~A(){throw 1;}
};

struct B{
    ~B()noexcept(false){throw 2;}
};

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