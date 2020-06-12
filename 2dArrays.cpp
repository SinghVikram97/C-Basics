#include <bits/stdc++.h>
using namespace std;
void func(int mat[][3])
{
  mat[0][0] = 1;
  cout << mat[0][0] << endl;

  cout << *(mat) << endl;     /// 600
  cout << *(mat + 1) << endl; // 612 (3 integers*sizeof(int)=1 array apart) as it is pointer to array of 3 integers

  // *mat is pointer to 1st element of 1d array of 3 integer
  cout << mat << " " << mat[0] << " " << &mat[0] << " " << *mat << " " << &mat[0][0] << endl; // All same

  *mat[0] = 2;
  *mat[2] = 3;
  *(*(mat + 2) + 2) = 5;
  cout << mat[2][0] << " " << mat[2][2] << endl; // 3,5

  cout << mat + 1 << " " << *(mat + 1) << " " << &mat[1][0] << endl; //612 (as moving to next pointer to array of 3 integers)

  // mat+1 is a pointer to array of 3integers
  // So if *(mat+1) we dereference it and get array of 3 integers
  // And simple array name gives address of 1st element of array
  // So mat+1 and *(mat+1) same
}
int main()
{
  int(*mat)[3]; // pointer to an array of 3 integers
  int *ptr[13]; // array of 13 pointers

  int a = 5;

  ptr[0] = &a;
  cout << *(ptr[0]) << endl;

  func(mat);
}