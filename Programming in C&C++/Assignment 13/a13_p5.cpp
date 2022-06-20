/*
CH-230-A
a13_p5.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/


#include <iostream>
using namespace std;

class A
{
  int x;
public:
  A() { x = 0; }
  A(int i) { x = i; }
  void print() { cout << x; }
};

class B: virtual public A
{
public:
  B():A(10) {  }
};

class C:  virtual public A
{
public:
  C():A(10) {  }
};

class D: public B, public C {
};

int main()
{
    D d;
    /*The error is: use of deleted function 'D::D()'
    and no matching function for call to 'A::A()'*/

    /*The class D does not have a default constructor so
    the compiler is generating one for it. It calls the
    default constructors of the parent classes. The second
    error comes because there is no default constructor
    for class A*/

    /*One solution to this is to add the default constructor
    in class A (as done).*/

    d.print();
    return 0;
}
