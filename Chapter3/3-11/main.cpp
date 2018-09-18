class Info {
public:
    Info() { InitRest(); }
    Info(int i) : Info() { type = i; }
    Info(char e): Info() { name = e; }

private:
    void InitRest() { /* 其它初始化 */ }
    int  type {1};
    char name {'a'};
    // ...
};

//　编译选项： g++ -c -std=c++11 3-2-2.cpp