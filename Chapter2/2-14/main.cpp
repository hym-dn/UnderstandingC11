class Init{
public:
    Init():a(0){}
    Init(int d):a(d){}
private:
    int a;
    const static int b=0;
    int c=1; // 成员,无法编译通过
    static int d=0; // 成员无法编译通过
    static const double e=1.3; // 非整型或枚举，无法编译通过
    static const char *const f="e"; // 非整型或枚举，无法编译通过
};

// 编译选项: g++ -c 2-7-1.cpp