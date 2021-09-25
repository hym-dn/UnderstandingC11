#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = { 1,2,3,4,5 };
    for (auto i = v.begin(); i!=v.begin(); ++i)
        cout << *i << endl;
    for (auto e: v)
        cout << e << endl;
}