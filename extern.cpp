#include <bits/stdc++.h>
using namespace std;
// Variables with “extern” keyword are only declared not defined.
void printAgain()
{
  extern int b;
  cout << b << endl; // without extern (b was not declared in this scope)
  extern int c;      // extern variables intialized to 0 by default
  // normal int variables (auto) have garbage values
  cout << c << endl;
}
int a = 2; // extern variable
int b = 4;
int c;
void print();
int main()
{
  printAgain();
}

void print()
{
  // extern int a = 1; a has both extern and intializer (it redefinition)
  extern int a; // declaration only
  // states that variable defined elsewhere
  // if definiton of external variable occurs in source file before its use in particular function
  // Then there is no need for extern keyword
  cout << a << endl;
}
