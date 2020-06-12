#include <bits/stdc++.h>
using namespace std;
class Sales_Item
{
private:
  string isbn;
  unsigned units_sold;
  double revenue;
  static int objectNos;
  static int initObjectNo();

public:
  double avg_price() const; // Can't change object from which it is called (const this pointer)
  bool same_isbn(const Sales_Item &rhs) const
  {
    return isbn == rhs.isbn;
  }
  Sales_Item() : revenue(0.0)
  {
    cout << "units sold " << units_sold << endl; // Intialized but garbage value
    units_sold = 0;
    objectNos++;
  };
  Sales_Item(const string &book) : isbn(book), units_sold(0), revenue(0.0)
  {
    objectNos++;
  };
  Sales_Item(int rev) : revenue(rev), isbn(""), units_sold(0){};
  void printItems() const
  {
    cout << isbn << " " << units_sold << " " << revenue << endl;
  }
  static int getNumObjects()
  {
    // cout << revenue << endl; error
    return objectNos;
  }
  Sales_Item &operator=(const Sales_Item &rhs);                              // Assignment operator
  Sales_Item &operator+=(const Sales_Item &rhs);                             //recieves this by default/ return reference not value like +
  friend Sales_Item operator+(const Sales_Item &lhs, const Sales_Item &rhs); // Declared as friend so it can access private members
  friend istream &operator>>(istream &in, Sales_Item &s);                    // second should be non const as we want to read into it
  friend ostream &operator<<(ostream &os, const Sales_Item &s);
  ~Sales_Item() {}
};

double Sales_Item::avg_price() const
{
  if (units_sold)
  {
    return revenue / units_sold;
  }
  else
  {
    return 0;
  }
}
int Sales_Item::initObjectNo()
{
  return 0;
}
int Sales_Item::objectNos = Sales_Item::initObjectNo(); // Can define private static members here but can't use
// Even though initObjectNo is private we can use this function to initialize objectNos
// The definition of objectNos like any other member definiton is in scope of the class and hence has access to private
// Members of class
Sales_Item &Sales_Item::operator=(const Sales_Item &rhs)
{
  isbn = rhs.isbn;
  units_sold = rhs.units_sold;
  revenue = rhs.revenue;
  return *this; //Returns reference
}
Sales_Item &Sales_Item::operator+=(const Sales_Item &rhs)
{
  revenue = revenue + rhs.revenue;
}
Sales_Item operator+(const Sales_Item &lhs, const Sales_Item &rhs)
{
  Sales_Item result;
  result = lhs.revenue + rhs.revenue;
  return result;
}
//  Can't be member because in member first argument is this by default and we need 1st to be a istream object
istream &operator>>(istream &in, Sales_Item &s)
{
  in >> s.isbn >> s.units_sold >> s.revenue;
  return in;
}
ostream &operator<<(ostream &os, const Sales_Item &s)
{
  os << s.isbn << " " << s.units_sold << " " << s.revenue << endl;
  return os;
}
int main()
{
  Sales_Item s1(100);
  s1.printItems();
  cout << s1.avg_price() << endl;
  Sales_Item s2("abc");
  s2.printItems();
  cout << "No of objects are " << Sales_Item::getNumObjects() << endl;
  cout << s1.getNumObjects() << endl;
  // cout << Sales_Item::initObjectNo() << endl; error
  Sales_Item s3 = s2;
  s2.printItems();
  Sales_Item s4(50);
  s4 += s1;
  s4.printItems();
  Sales_Item s5 = s1 + s4;
  s5.printItems();
  Sales_Item s6;
  cin >> s6;
  cout << s6;
}
