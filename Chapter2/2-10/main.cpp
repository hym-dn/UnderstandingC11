#include<cassert>
using namespace std;

static_assert(sizeof(int)==8,"This 64-bit machine should follow this!");

int main(){return 0;}

// 编译选项： g++ -std=c++11 2-5-5.cpp