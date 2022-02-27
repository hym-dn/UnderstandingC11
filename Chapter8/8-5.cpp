alignas(double) void f(); // 错误alignas不能修饰函数
alignas(double) unsigned char c[sizeof(double)]; // 正确
extern unsigned char c[sizeof(double)];
alignas(float) 
    extern unsigned char c[sizeof(double)]; // 错误不同对齐方式的变量定义