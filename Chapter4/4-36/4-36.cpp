#include <iostream>
using namespace std;

int func(int a[]) {
    for (auto e: a)
    {
        cout << e;
    }
}

int main() {
    int arr[] = { 1,2,3,4,5 };
    func(arr);
}