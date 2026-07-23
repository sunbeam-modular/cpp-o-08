#include <iostream>
using namespace std;

// Data types in C++
//  - C++ support all data types in C - int, float, char, double, ...
//  - C++ has two new data types
//      - bool: boolean value - true or false - size=1 byte
//          "true" is const value - 1
//          "false" is const value - 0
//      - wchar_t: wide char - 2 bytes (windows) or 4 bytes (linux)
//          char - is ASCII (-128 to +127) - English letters, digits, punctuation marks.
//              - only useful for "English" langauge
//          wchar_t - is UNICODE - bigger range (2 bytes 65536 chars)
//              - useful for English and other prime langauges.

// In C, all vars must be declared at the start of the block.
//  In C++, you can declare variables in between the statements.

int main() {
    bool flag = true; // or false;
    cout << "flag = " << flag << endl;

    wchar_t ch = 'A';
    wcout << ch << endl; // wcout/wcin for wide chars.

    //const int x; // valid in C -- uninitialized const variable
    const int x = 123; // in C++, const var must be initialized at point of declaration.
    cout << "x = " << x << endl;
    return 0;
}
