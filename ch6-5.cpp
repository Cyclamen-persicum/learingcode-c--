#include "mycircle.cpp"
#include "myrect.cpp"
#include <iostream>
using namespace std;
int main()
{
    double width,length;
    cout<<"please enter two number:\n";
    cin>>width>>length;
    cout<<"area of rectangle is "<<rect(width,length)<<endl;
    double radius;
    cout<<"please enter a radius:\n";
    cin>>radius;
    cout<<"area of circle is "<<circle(radius)<<endl;
}