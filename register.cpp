#include <bits/stdc++.h>
using namespace std;
int main()
{
  // Registers are faster than memory to access,
  // so the variables which are most frequently used in a C program can be put in registers using register keyword.
  register int i;
  int *a = &i;
  cout << (*a) << endl;
  // If you use & operator with a register variable then compiler may give an error or warning
  // it may be stored in a register instead of memory and accessing address of a register is invalid.

  // register keyword can be used with pointer variables. Obviously, a register can have address of a memory location

  // Register is a storage class, and C doesn’t allow multiple storage class specifiers for a variable.
  // So, register can not be used with static .

  // Register can only be used within a block (local), it can not be used in the global scope (outside main).

  // IMP
  // There is no limit on number of register variables in a C program,
  // but the point is compiler may put some variables in register and some not.
}