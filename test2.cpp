#include <iostream>
using namespace std;
void chu(int n,int a,int &b,int* ch)
{
    if(n%a==0)
    {
        ch[b]=a;
        b++;
    }
}
int main()
{
    int b=0,n;
    int ch[3];
    cin>>n;
    chu(n,3,b,ch);
    chu(n,5,b,ch);
    chu(n,7,b,ch);
    switch(b)
    {
        case 0:{cout<<"wu"<<endl;break;}
        case 1:{cout<<ch[0]<<endl;break;}
        case 2:{cout<<ch[0]<<ch[1]<<endl;break;}
        case 3:{cout<<"all"<<endl;break;}
    }
}