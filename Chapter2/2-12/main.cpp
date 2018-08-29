#include<iostream>
using namespace std;

void Throw() {throw 1;}
void NoBlockThrow() {Throw();}
void BlockThrow() noexcept {Throw();}

int main(){
    try{
        Throw();
    }catch(...){
        cout<<"Found throw."<<endl; // Found throw
    }
    try{
        NoBlockThrow();
    }catch(...){
        cout<<"Throw is not blocked."<<endl; // Throw is not blocked.
    }
    try{
        BlockThrow(); // teminate called after throwing an instance of 'int'
    }catch(...){
        cout<<"Found throw 1."<<endl;
    }
}

// 编译选项： g++ -std=c++11 2-6-1.cpp