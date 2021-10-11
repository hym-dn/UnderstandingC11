#include <thread>
#include <atomic>
#include <iostream>
using namespace std;

atomic<int> a;
atomic<int> b;

int Thread1(int) {
    int t = 1;
    a = t;
    b = 2;
}

int Thread2(int) {
    while (b != 2)
        cout << a << endl;
}

int main()
{
    thread t1(Thread1,0);
    thread t2(Thread2,0);

    t1.join();
    t2.join();

    return 0;
}