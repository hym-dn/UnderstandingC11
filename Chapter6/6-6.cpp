﻿struct NotLiteral {
    NotLiteral() { i = 5; }
    int i;
};

NotLiteral nl;

template<typename T> constexpr T ConstExp(T t) {
    return t;
}

void g() {
    NotLiteral nl;
    NotLiteral nl1 = ConstExp(nl);
    constexpr NotLiteral nl2 = ConstExp(nl);
    constexpr int a = ConstExp(1);
}