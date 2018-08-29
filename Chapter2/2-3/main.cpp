#include<iostream>
using namespace std;

struct TestStruct{
    TestStruct():name(__func__){}
    const char *name;
};

/**
 * 输出调用类中的函数信息
 */
int main(){
    TestStruct ts;
    cout<<ts.name<<endl; // TestStruct
}

// 编译选项: g++ -std=c++11 2-1-3.cpp