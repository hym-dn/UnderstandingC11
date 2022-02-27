#include <iostream>
using namespace std;

class InComplete;
struct Completed{};

int main() {
    int a;
    long long b;
    auto &c = b;
    char d[1024];
    // 对内置类型和完整类型使用alignof
    cout << alignof(int) << endl
         << alignof(Completed) << endl;
    // 对变量、引用或者数组使用alignof
    cout << alignof(a) << endl
        << alignof(b) << endl
        << alignof(c) << endl
        << alignof(d) << endl;
    // 本句无法编译通过，InComplete数据类型不完整
    // cout << alignof(InComplete) << endl;
}