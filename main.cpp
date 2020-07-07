//#include "ClassDesk.h"
#include "ClassDesk.cpp"
using namespace std;
int main()
{
    Desk dd[5];
    for(int i=0;i<=4;i++)
    {
        dd[i].print();
        cout<<endl;
    }
}