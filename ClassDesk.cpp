#include "ClassDesk.h"
//#include <iostream>
using namespace std;
Desk::Desk()
{
    weight=10;
    high=5;
    width=5;
    length=5;
}
void Desk::print()
{
    cout<<"weight="<<weight<<endl
        <<"high="<<high<<endl
        <<"width="<<width<<endl
        <<"length="<<length<<endl;
}