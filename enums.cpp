#include <bits/stdc++.h>
using namespace std;
// enum are user defined data types
// alternative to #define
// By default 1st value in enum is 0 then 1 and so one
enum boolean
{
  NHI,
  HAAN,
  ptanhi
};
// Use case
enum months
{
  JAN,
  FEB,
  MARCH
};
// 2 enums can have the same value
enum e
{
  working = 1,
  failed = 0,
  freezed = 0
};
// if we don't specify some values it assigns previous plus one
enum test
{
  a = 3,
  b,
  c
};
// The value assigned to enum names must be some integeral constant
enum escapes
{
  NEWLINE = '\n'
  //valid
  // ESCAPE = "escape" invalid
};

enum State
{
  WORKING = 0,
  FAILED,
  FREEZED
};

int main()
{
  cout << c << endl; // 5
  int c = 10;
  cout << c << endl; //10
}
// There are multiple advantages of using enum over macro when many related named constants have integral values.
// a) Enums follow scope rules.
// b) Enum variables are automatically assigned values. Following is simpler

// Macros can be of any type. Macros can even be any code block containing statements, loops, function calls etc.
// #define ll long long int
// Macros are expanded by the pre-processor before compilation takes place. Compiler will refer error messages in expanded macro to the line where the macro has been called.