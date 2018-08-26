#include<stdio.h>

#define LOG(...) {\
    fprintf(stderr,"%s: Line %d;\t",__FILE__,__LINE__);\
    fprintf(stderr,__VA_ARGS__);\
    fprintf(stderr,"\n");\
}

/**
 * 利用宏可变长参数记录日志
 */
int main(){
    int x=3;
    // 一些代码...
    LOG("x=%d",x); // 2-1-5.cpp: Line 12: x=3
}

// 编译器选项: g++ -std=c++11 2-1-5.cpp