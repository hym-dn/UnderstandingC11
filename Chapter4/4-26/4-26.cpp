﻿#include <type_traits>
#include <iostream>
using namespace std;

int i = 4;
int arr[5] = {0};
int *ptr = arr;

int && RvalRef();

int main() {
    cout << is_rvalue_reference<decltype(RvalRef())>::value << endl;
    cout << is_lvalue_reference<decltype(true?i:i)>::value << endl;
    cout << is_lvalue_reference<decltype(++i)>::value << endl;
    cout << is_lvalue_reference<decltype((i))>::value << endl;
    cout << is_lvalue_reference<decltype(arr[3])>::value << endl;
    cout << is_lvalue_reference<decltype(*ptr)>::value << endl;
    cout << is_lvalue_reference<decltype("lval")>::value << endl;
    cout << is_lvalue_reference<decltype(i++)>::value << endl;
    cout << is_rvalue_reference<decltype(i++)>::value << endl;
}