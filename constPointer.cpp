#include <bits/stdc++.h>
using namespace std;
int main()
{

  const int a = 5;
  // Pointer to const
  const int *p;

  p = &a;

  cout << (*p) << endl;

  //(*p) = 7; // can't change value of memory block to which it points (error)

  int b = 6;
  // Pointer to const
  const int *q;

  // (*q) = 7;  // Even though b is not const but pointer is a pointer to const integer so error

  // Const pointer
  int c = 7;
  int *const pt = &c; // Have to intialize while declaring as it is const pointer

  *(pt) = 8;

  cout << (*pt) << endl;

  //pt = &b; // Error as const pointer
  // Can't change the value of the pointer
  // Ie. the address to which it points
}