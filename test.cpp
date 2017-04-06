#include <iostream>
using namespace std;
class Point
{
 public:
   Point (int val) {x=val;}
   Point & operator ++()
   {
x++;
return *this;
}
 Point operator ++(int)
{
Point old=*this;
++(*this);
return old;
}
int GetX() const {return x;}
 private:
   int x;
};
int main()
{
  Point a(10);
  cout<<(++a).GetX();
  cout<<(a++).GetX();
  return 0;
}