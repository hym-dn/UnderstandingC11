void Func(int i){};
void Func(char c) = delete; // 显示删除char版本

int main()
{
    Func(3);
    Func('c'); // 本句无法编译通过
    return 1;
}