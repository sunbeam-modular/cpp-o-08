#include <iostream>
using namespace std;

// macros in C
#define SQR(n) (n * n)

// inline functions -- replaced at their calls by the compiler.
//  - execution is faster (no function activation record created/destroyed)
//  - still type-safe (param types are given)
// compiler only replace inline functions when they are short and simple.
//  - not when function contains loops, switch, nested fn calls, ...
//  - if functions contains loops, ..., then compiler simply ignore inline keyword.

// declaration
inline int square(int n);
// definition
int square(int n) {
    return n * n;
}

int main() {
    int num = 7;
    int res = square(num); // replaced -> num * num (in generated asm code)
    cout << "result: " << res << endl;
    res = SQR(num);
    cout << "result: " << res << endl;
    return 0;
}
