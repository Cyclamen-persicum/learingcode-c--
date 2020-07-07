#include <iostream>
using namespace std;
void max(int array[],int &maxnum_Fun,int &maxloc_Fun)
{
    for(int i=0;i<=9;i++)
    {
        if(array[i]>=maxnum_Fun)
        {
            maxnum_Fun=array[i];
            maxloc_Fun=i;
        }
    }
}
int main()
{
    int array[]={-1,-5,-9,3,-4,5,0,8,9,7};
    int maxNum=0,maxLoc=0;
    max(array,maxNum,maxLoc);
    cout<<"最大值为:"<<maxNum<<endl;
    cout<<"其位于:"<<maxLoc<<endl;
    return 0;
}