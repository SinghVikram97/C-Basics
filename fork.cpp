#include <bits/stdc++.h>
#include <unistd.h>
// In the C and C++ programming languages,
// unistd.h is the name of the header file that provides access to the POSIX operating system API.
using namespace std;
int main()
{
  // fork(); // If we write fork after hello then it prints only 1 time
  // fork();
  // cout << "Hello" << endl;

  // cout << fork() << endl; //  prints 0 and 21555 (+ve no)

  cout << (0 || 1) << endl;
  if (fork() || fork())
  {
    fork();
  }
  cout << "Hi" << endl;
}