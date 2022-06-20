/*
CH-230-A
a13_p4.[c++]
Sohaib Salman
ssalman@jacobs-university.de
*/

#include<iostream>
using namespace std;

class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};

class B:  public virtual A
{
public:
  B()  { setX(10); }
};

class C:  public virtual A
{
public:
  C()  { setX(20); }
};

class D: public B, public C {
};

int main()
{
    D d;
    d.print();
    /*the error occurs: request for member 'print'
    is ambiguous*/

    /*The print method is inherited from class A creates
    ambiguity due to multiple inheritance from B and C

    The compiler does not if to call inherited print()
    from B or C

    One solution to this is For class B and C to virtually
    inherit methods from class A

    This will make sure that only one of the methods is
    inherited and no duplicates are made*/
    return 0;
}
