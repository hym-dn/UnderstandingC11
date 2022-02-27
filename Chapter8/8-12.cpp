#include <iostream>
using namespace std;

[[noreturn]] void Func(int i)
{
    if(i<0)
        throw "negative";
    else if(i>0)
        throw "positive";
}

int main() {
    Func(0);
    cout << "Returned" << endl; // 无法执行该语句
    return 1;
}