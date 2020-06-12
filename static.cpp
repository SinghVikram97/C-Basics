#include <bits/stdc++.h>
using namespace std;
static int c1 = 0;
int func()
{
  static int count; // intialized to 0 by default
  count++;
  c1++;
  return count;
}
// Unlike global functions in C, access to static functions is restricted to the file where they are declared.
// Therefore, when we want to restrict access to functions, we make them static.
// Another reason for making functions static can be reuse of the same function name in other files.
static void func1()
{
  cout << "Static function" << endl;
}
int main()
{
  cout << func() << endl;
  cout << func() << endl;
  cout << c1 << endl;
  func1();
}

// The global variable has global scope, I mean it can be accessed by any function, from any file,
// whereas static variable has file scope, it is not possible to access the variable from any other file.
// This technique is helpful when u want to make, variable accessible to all functions of that file,
// but not functions of another file.