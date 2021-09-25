int i = 4;
int arr[5] = {0};
int *ptr = arr;

struct S {double d;} s;

void Overloaded(int);
void Overloaded(char);

int && RvalRef();

const bool Func(int);

decltype(arr) var1;
decltype(ptr) var2;
decltype(s.d) var4;
decltype(Overloaded) var5;

decltype(RvalRef()) var6 = 1;

decltype(true?i:i) var7 = i;
decltype((i)) var8 = i;
decltype(++i) var9 = i;
decltype(arr[3]) var10 = i;
decltype(*ptr) var11 = i;
decltype("lval") var12 = "lval";

decltype(1) var13;
decltype(i++) var14;
decltype((Func(1))) var15;