// The C Preprocessor is not a part of the compiler, but is a separate step in the compilation process.
// In simple terms, a C Preprocessor is just a text substitution tool
// and it instructs the compiler to do required pre-processing before the actual compilation.
// Called header guards
#ifndef _bits / stdc++ _
#define _bits / stdc++ _
#include <bits/stdc++.h>
#endif

// For #include <filename> the preprocessor searches in an implementation dependent manner,
// normally in search directories pre-designated by the compiler/IDE.
// This method is normally used to include standard library header files.

// For #include "filename" the preprocessor searches first in the same directory as the file containing the directive,
// and then follows the search path used for the #include <filename> form.
// This method is normally used to include programmer-defined header files.
#define max(a, b) (a > b ? a : b)
#define square(x) x *x

// #define YEARS_OLD 12 // remove this then output is 10
#ifndef YEARS_OLD
#define YEARS_OLD 10
#endif
using namespace std;
int main()
{
  cout << max(2, 3) << endl;
  cout << square(4) << endl;
  cout << square(2 + 3) << endl; // 11 not 25
  cout << YEARS_OLD << endl;
}