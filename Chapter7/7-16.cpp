#include <cstddef>
#include <new>

extern void *p;

class NoStackAlloc{
public:
    ~NoStackAlloc() = delete;
};

int main()
{
    NoStackAlloc nsa; // 无法编译通过
    new (p) NoStackAlloc(); // placement new, 假设 p无需调用西沟函数
    return 1;
}