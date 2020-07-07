#include <iostream>
using namespace std;

class Base
{
public:
 virtual void f(int a) {
  cout << "virtual Base::f(int a)" << endl;
 }

 void f(double d) {
  cout << "Base::f(double d)" << endl;
 }
};

class Derived : public Base
{
public:

 void f(double d) {
  cout << "Derivd::f(double d)" << endl;
 }
};

int main()
{
 Derived d;
 d.f(3);
 d.f(2.5);

 Derived *pd = new Derived();
 pd->f(3);
 pd->f(2.5);

 Base b;
 b.f(5);
 b.f(3.5);

 Base *pBase = new Derived();
 pBase->f(5);
 pBase->f(3.5);
}