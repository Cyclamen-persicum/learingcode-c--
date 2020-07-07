#include "link.h"
#include <iostream>
using namespace std;
bool getInput(double &x,double &y)
{
    cout<<"Enter x and y:"<<endl;
    cin>>x>>y;
    return x>=0;
}
int main()
{
    Point p;
    for(double x,y;getInput(x,y);)
    {
        p.Set(x,y);
        cout<<"angle="<<p.angle()<<","
            <<"radius="<<p.radius()<<","
            <<"x offset="<<p.xOffset()<<","
            <<"y offset="<<p.yOffset()<<endl;
    }
    return 0;
}