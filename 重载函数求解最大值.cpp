//该程序用于计算十个数字之间的最大值以及其所在位置的下标
#include <iostream>
using namespace std;
int max(int array[])
{
    int maxNum=0;
    for(int i=0;i<=9;i++)
        if (array[i]>=maxNum)
            maxNum=array[i];
    return maxNum;
}
int max(int array[],int maxNum)
{
    int maxLoc;
    for(maxLoc=0;maxLoc<=9;maxLoc++)
        if(maxNum==array[maxLoc])
            break;
    return maxLoc+1;
}
int main()
{
    cout<<"该程序用于计算十个数字之间的最大值以及其所在位置的下标"<<endl;
    int array[10];
    cout<<"请输入十个数字，每两个数字之间使用空格分离"<<endl;
    for(int i=0;i<=9;i++)
        cin>>array[i];
    cout<<"最大值为："<<max(array)<<endl;
    cout<<"最大值所处位置为："<<max(array,max(array))<<endl;
    return 0;
}