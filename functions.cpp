// https://www.geeksforgeeks.org/difference-between-definition-and-declaration/
#include <bits/stdc++.h>
using namespace std;
int power(int m, int n); // Declaration (needed) otherwise error power wasn't delcared in this scope
int main()
{
  // Actual arguments
  cout << power(2, 3) << endl;
  return 0;
}
// formal arguments
int power(int base, int n) //Definition
{

  int i, p; // automatic variable (auto) comes into existence when function called and disappear when exited
  p = 1;
  for (i = 1; i <= n; i++)
  {
    p = p * base;
  }
  return p;
}
// Definition is where variable is created or assignned storage
// Declaration is where nature of variable is stated but no storage allocated