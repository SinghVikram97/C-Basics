
#include <bits/stdc++.h>
using namespace std;
int main()
{
  // A dangling pointer points to memory that has already been freed.
  // The storage is no longer allocated. Trying to access it might cause a Segmentation fault.
  int *a = new int;
  *a = 5;
  int *b = a;
  delete b;
  cout << *a << endl; // a is now a dangling pointer

  // A memory leak is memory which hasn't been freed, there is no way to access (or free it) now,
  // as there are no ways to get to it anymore.
  //  (E.g. a pointer which was the only reference to a memory location dynamically allocated (and not freed)
  // which points somewhere else now.)

  // Or the pointer that points to it gets out of scope
}