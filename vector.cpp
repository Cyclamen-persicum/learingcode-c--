#include <vector>
#include <iostream>
using namespace std;
vector<int> obj;
int a[5]={10,20,30,40,50};
void vectorCreate()
{
    for(int i=0;i<=4;i++)
        obj.push_back(a[i]);
}
void vectorDelete(int n)
    {obj.erase(obj.begin()+n);}
void vectorInsert(int n,int num)
    {obj.insert(obj.begin()+n,num);}
void vectorSwap(int num1,int num2)
    {swap(obj[num1],obj[num2]);}
void vectorOutput()
{
    for(int i=0;i<obj.size();i++)
        cout<<obj[i]<<' ';
    cout<<endl;
}
int main()
{
    vectorCreate();
    vectorOutput();
    vectorSwap(2,4);
    vectorOutput();
    vectorDelete(4);
    vectorOutput();
}