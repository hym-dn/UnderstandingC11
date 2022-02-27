#include <iostream>
using namespace std;

// 自定义的ColorVecotr，拥有32个字节数据
struct ColorVector {
    double r;
    double g;
    double b;
    double c;
};

int main() {
    // 使用C++11中aliginof来查询ColorVector对齐方式
    cout << "alignof(ColorVector):" << alignof(ColorVector) << endl;
    return 1;
}