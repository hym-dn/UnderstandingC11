﻿#include <thread>
#include <atomic>
#include <cassert>
#include <string>

using namespace std;

atomic<string*> ptr;
atomic<int> data;

void Producer()
{
    string *p =new string("Hello");
    data.store(42,memory_order_relaxed);
    ptr.store(p,memory_order_release);
}

void Consumer()
{
    string *p2;
    while(!(p2 = ptr.load(memory_order_consume)))
        ;
    assert(*p2=="Hello");
    assert(data.load(memory_order_relaxed)==42); // 此处的断言，并不一定正确
}

int main()
{
    thread t1(Producer);
    thread t2(Consumer);

    t1.join();
    t2.join();
}