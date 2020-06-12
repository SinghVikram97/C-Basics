#include <bits/stdc++.h>
using namespace std;
// Data types used as case labels of switch statement in C are integer,short,long and character.
// float double string can't be used
int main()
{

  char ch = 'c';
  // Exected in order
  switch (ch)
  {
    // Valid
  default:
    cout << "Nothing" << endl;

    case 'b':
    cout << "b" << endl;
    break;

  case 'a':
    cout << "a" << endl;
  }
}