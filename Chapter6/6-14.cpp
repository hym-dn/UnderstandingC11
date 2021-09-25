#include <cassert>
#include <iostream>
using namespace std;

template<class ...A> void Print(A...arg) {
    assert(false); // 非6参数片特化版本都会默认assert(false)
}

// 特化6参数的版本
void Print(int a1,int a2,int a3,int a4,int a5,int a6) {
    cout << a1 << ", " << a2 << ", " << a3 << ", "
       << a4 << ", " << a5 << ", " << a6 << endl;
}

template<class...A> int Vaargs(A...args){
    int size = sizeof...(A); // 计算变长包的长度
    switch(size){
        case 0:
          Print(99,99,99,99,99,99);
          break;
        case 1:
          Print(99,99,args...,99,99,99);
          break;
        case 2:
          Print(99,99,args...,99,99);
          break;
        case 3:
          Print(args...,99,99,99);
          break;
        case 4:
          Print(99,args...,99);
          break;
        case 5:
          Print(99,args...);
          break;
        case 6:
          Print(args...);
          break;
        default:
          Print(0,0,0,0,0,0);
    }
    return size;
}

int main(void) {
    Vaargs();
    Vaargs(1);
    Vaargs(1,2);
    Vaargs(1,2,3);
    Vaargs(1,2,3,4);
    Vaargs(1,2,3,4,5);
    Vaargs(1,2,3,4,5,6);
    Vaargs(1,2,3,4,5,6,7);
    return 0;
}