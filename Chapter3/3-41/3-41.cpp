#include <string>
using namespace std;

union T {
    string s;
    int n;
};

int main() {
    T t;
}