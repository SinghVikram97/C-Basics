#include <bits/stdc++.h>
using namespace std;
struct s
{
  int a;
  char b;
};
int main()
{
  s obj;
  cout << sizeof(int) << " " << sizeof(char) << " " << sizeof(obj) << endl;

  // 4+1=5;
  // But size of obj is 8
  // Due to structure padding
  // Read on stack overflow
}