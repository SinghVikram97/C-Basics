#include <bits/stdc++.h>
using namespace std;
int main()
{
  char amsg[] = "Vikram Singh Bedi";
  *(amsg + 1) = 'a'; // Can be changed
  // Indiviual characters within array may be changed but amsg will always refer to same storage
  cout << amsg << endl;

  char *pmsg = "Vikram Singh Bedi"; // Allowed in c but gives warning in c++
  *(pmsg + 1) = "S";                // error can't conver char to const char *
  // pmsq points to string constant
  // pointer may subsequently modified to point elsewhere but can't modify string contents
  cout << *(pmsg) << endl;

  const char *pmsg1 = "Vikram Singh Bedi"; // Gives no warning in c++
  cout << *(pmsg1) << endl;

  // Both terminated by '\0'
}