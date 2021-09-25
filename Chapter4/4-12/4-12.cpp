double foo();
float * bar();

const auto a = foo();    // a: const double 
const auto & b = foo();  // b: const double &
volatile auto * c = bar(); // c: volatile float *

auto d = a;
auto & e = a;
auto f = c;
volatile auto & g = c;