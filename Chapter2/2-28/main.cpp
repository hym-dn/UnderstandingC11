template<typename T1,typename T2=int> class DefClass1;
template<typename T1=int,typename T2> class DefClass2; // 无法编译通过

template<typename T,int i=0> class DefClass3;
template<int i=0,typename T> class DefClass4; // 无法编译通过

template<typename T1=int,typename T2> void DefFunc1(T1 a,T2 b);
template<int i=0,typename T> void DefFunc2(T a);

// 编译选项: g++ -c -std=c++11 2-11-2.cpp