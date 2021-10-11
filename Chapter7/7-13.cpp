﻿class ConvType {
public:
    ConvType(int i) {};
    explicit ConvType(char c) = delete; // 删除char版本
};

void Func(ConvType ct) {}

int main() {
    Func(3);
    Func('a'); // 无法编译通过

    ConvType ci(3);
    ConvType cc('a'); // 无法通过编译
}