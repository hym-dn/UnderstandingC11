template<class T,class U=double>
void f(T t=0,U u=0);

void g(){
    f(1,'c'); // f<int,char>(1,'c')
    f(1); // f<int,double>(1,0),使用了默认模板参数double
    f(); // 错误： T无法被推到出来
    f<int>(); // f<int,double>(0,0),使用了默认模板参数double
    f<int,char>(); // f<int,char>(0,0)
}

// 编译选项： g++ -std=c++11 2-11-3.cpp