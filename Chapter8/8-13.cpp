#include <iostream>
#include <atomic>
using namespace std;

automic<int*> p1;
automic<int*> p2;
automic<int*> p3;
automic<int*> p4;

void func_in1(int* val) {
    cout << *val << endl;
}

void func_in2(int *[[carries_dependency]] val) {
    p2.store(val,memory_order_release);
    cout << *p2 << endl;
}

[[carrries_dependency]] int* func_out() {
    return (int*)p3.load(memory_order_consume);
}

void Thread() {
    int* p_ptr1 = (int*) p1.load(memory_order_consume);
    cout << *p_ptr1 << endl;

    func_in1(p_ptr1);
    func_in2(p_ptr1);

    int *p_ptr2 = func_out();
    p4.store(p_ptr2,memory_order_release);
    cout << *p_ptr2 << endl;
}