#include <bits/stdc++.h>
using namespace std;
// Allocate block of memory on heap
// malloc,calloc,realloc
// Deallocate memory
// Free
int main()
{
  int *arr = (int *)malloc(3 * sizeof(int)); // takes no of bytes to allocate and returns void pointer
  // so cast it into int*
  arr[1] = 2;
  cout << arr[1] << endl;

  int *a = (int *)calloc(3, sizeof(int)); // Initialized to 0 by defult

  cout << a[1] << endl;

  arr = (int *)realloc(arr, 5 * sizeof(int));
  cout << arr[1] << endl;

  free(arr);  // Deallocate memory
  arr = NULL; // Set it to null as we can still acess the memory if we have a pointer to it
}