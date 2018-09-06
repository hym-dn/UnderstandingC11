template<typename T> struct MyTemplate{};

int main(){
    MyTemplate<struct{int a;}> t; // 无法编译通过，匿名类型的声明不能在末班实参位置
    return(0);
}

// 编译选项： g++ -std=c++11 2-13-2.cpp