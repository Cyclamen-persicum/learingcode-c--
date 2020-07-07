#include <iostream>
using namespace std;
class Increase
{
    public:
        Increase(int x):value(x) {}
        Increase& operator++();
        Increase operator++(int );
        void display() {cout<<"The value is "<<value<<endl;}
    private:
    int value;
};
Increase& Increase::operator++()
{
    value++;
    return *this;
}
Increase Increase::operator++(int)
{
    Increase temp(*this);
    value++;
    return temp;
}
int main()
{
    Increase n(20);
    n.display();    //20
    (n++).display();//20,先用后加
    n.display();    //21
    ++n;
    n.display();    //22
    ++(++n);
    n.display();    //24
    (n++)++;
    n.display();    //25
}