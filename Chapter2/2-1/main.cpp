#include<iostream>
using namespace std;

/**
 * 打印出与C99兼容的宏定义
 */
int main(){
    // 输出编译器的目标系统环境中是否包含完整的标准C库
    cout<<"Standard Clib: "<<__STDC_HOSTED__<<endl; // Standard Clib:1
    // 输出表编译器的实现是否和C标准一致
    cout<<"Standard C: "<<__STDC__<<endl; // Standard C:1
    // 输出C标准的版本
    // cout<<"C Standard version: "<<__STDC_VERSION__<<endl;
    // 输出C++编译环境符合那个版本的ISO/IEC 10646标准
    cout<<"ISO/IEC "<<__STDC_ISO_10646__<<endl; // ISO/IEC 200009
}

// 编译选项 :g++ -std=c++11 2-1-1.cpp