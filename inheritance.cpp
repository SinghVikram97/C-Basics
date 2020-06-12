#include <bits/stdc++.h>
using namespace std;
class Item_Base
{
private:
  string isbn; // identifier for item
protected:
  double price; // normal undiscounted price
public:
  Item_Base(const string &book = "", double sales_price = 0.0) : isbn(book), price(sales_price){};
  string book() const
  {
    return isbn;
  }
  // Derived class will override and apply different discount algos
  virtual double net_price(int n) const
  {
    return n * price;
  }
  virtual ~Item_Base() {}
};
class Bulk_Item : public Item_Base
{
private:
  int min_qty; // Min_qty for purchase
  double discount;

public:
  double net_price(int cnt) const;
  Bulk_Item(const string &book = "", double sales_price = 0.0, double discount_price = 0.0, int qty = 0) : Item_Base(book, sales_price), discount(discount_price), min_qty(qty){};
};

double Bulk_Item::net_price(int cnt) const
{
  if (cnt >= min_qty)
  {
    return cnt * (1 - discount) * price; // Can access price as it is protected member of base class
  }
  else
  {
    return cnt * price;
  }
}
void print_total(const Item_Base &item, int n)
{
  // Because item is a reference to base class and net_price virtual function
  // So it depends on run time which object base or derived it refers to
  cout << "ISBN: " << item.book() << " number sold: " << n << " total price: " << item.net_price(n) << endl;
}
int main()
{
  Item_Base base("abc", 5);
  print_total(base, 10);
  Bulk_Item derived("bcd", 10, 0.1, 20);
  print_total(derived, 25);
}