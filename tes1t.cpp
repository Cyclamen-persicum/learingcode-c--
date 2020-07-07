#include <stdio.h>
#include <iostream>
using namespace std;
int array[6][4]={{60,80,90,75},
                 {75,85,65,77},
                 {80,88,90,98},
                 {89,100,78,81},
                 {62,68,69,75},
                 {85,85,77,91}};
int& getLevel(int grade[],int size,int& fxTypeA,int& fxTypeB)
{
    int sum=0;
    for(int i=0;i<size;i++)
        sum+=grade[i];
    return (sum/size>=80?fxTypeA:fxTypeB);
}
int main()
{
    int typeA=0,typeB=0;
    int student=6;
    int gradesize=4;
    for(int i=0;i<student;i++)
        getLevel(array[i],gradesize,typeA,typeB)++;
    cout<<"评级A有"<<typeA<<"人"<<endl;
    cout<<"评级B有"<<typeB<<"人"<<endl;
}