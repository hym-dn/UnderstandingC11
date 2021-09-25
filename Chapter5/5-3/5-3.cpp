#include <iostream>
using namespace std;

class Type {
public:
    enum type { general,light,medium,heavy };
    type val;
public:
    Type(type t): val(t) {}
    bool operator >= (const Type &t) { return val >= t.val; }
    static const Type General,Light,Medium,Heavy;
};