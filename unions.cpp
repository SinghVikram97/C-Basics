#include <bits/stdc++.h>
using namespace std;
union test {
  int x;
  int y;
};
union test1 {
  char a;
  int x;
};
int main()
{
  //  f we change x, we can see the changes being reflected in y.
  // They both share same memory location
  union test t;
  t.x = 2;
  cout << t.x << endl;
  t.y = 10;
  cout << t.x << endl;

  union test1 t1;
  t1.x = 'a';
  cout << t1.x << endl;       // 97 (ASCII value of a)
  cout << sizeof(t1) << endl; // Size of union is size of largest member

  // C Union is also like structure,
  // i.e. collection of different data types which are grouped together. Each element in a union is called member.

  // Union and structure in C  are same in concepts, except allocating memory for their members.

  // Structure allocates storage space for all its members separately.
  // Whereas, Union allocates one common storage space for all its members

  // We can access only one member of union at a time.
  // We can’t access all member values at the same time in union.
  // But, structure can access all member values at the same time.
  // This is because, Union allocates one common storage space for all its members.
  // Where as Structure allocates storage space for all its members separately.

  // Application of unions

  // Unions can be useful in many situations where we want to use the same memory for two or more members.
  // For example, suppose we want to implement a binary tree data structure
  // where each leaf node has a double data value, while each internal node has pointers to two children, but no data.
  // If we declare this as:

  struct NODE
  {
    struct NODE *left;
    struct NODE *right;
    double data;
  };
  // then every node requires 16 bytes, with half the bytes wasted for each type of node.
  // On the other hand, if we declare a node as following, then we can save space.
  struct NODE
  {
    bool is_leaf;
    union {
      struct
      {
        struct NODE *left;
        struct NODE *right;
      } internal;
      double data;
    } info;
  };

  // One classic is to represent a value of "unknown" type, as in the core of a simplistic virtual machine:
  typedef enum
  {
    INTEGER,
    STRING,
    REAL,
    POINTER
  } Type;
  typedef struct
  {
    Type type;
    union {
      int integer;
      char *string;
      float real;
      void *pointer;
    } x;
  } Value;
  // Using this you can write code that handles "values" without knowing their exact type, f
  // or instance implement a stack and so on.
}