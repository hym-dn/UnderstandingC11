#include<string>
#include<iostream>
using namespace std;

const char *hello(){return __func__;}
const char *world(){return __func__;}

/**
 * 打印调用函数名字
 */
int main(){
    cout<<hello()<<","<<world()<<endl; //hello,world
}

// 编译选项： g++ -std=c++11 2-1-2.cpp