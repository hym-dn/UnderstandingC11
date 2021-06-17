#include <iostream>
using namespace std;

namespace Jim {
    inline namespace Basic {
        struct Knife{Knife(){cout<<"Knife in Basic."<<endl;}};
        class CorkScrew{};
    }
    inline namespace Toolkit{
        template<typename T> class SwissArmyKnife{};
    }
    namespace Other {
        Knife b;
        struct Knife {Knife(){cout<<"Knife in Other."<<endl;}};
        Knife c;
        Basic::Knife k;       
    }
}

namespace Jim {
    template<> class SwissArmyKnife<Knife>{};
}

using namespace Jim;
int main(){
    SwissArmyKnife<Basic::Knife> sknife;
}