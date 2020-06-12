//https: //www.geeksforgeeks.org/storage-classes-in-c/
#include <bits/stdc++.h>
using namespace std;
int main()
{
  const int array[] = {1, 2, 3};
  static int c = array[1]; // error in c
  cout << c << endl;

  //For external and static variables initiliazer must be const expreesion;
  // Intialization is done once, conecptually before program begins execution

  // For auto and register variables the initializer is not restricted to being a constant
  // It can be any expression involving previous defined values even function calls
}