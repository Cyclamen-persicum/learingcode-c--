#include<iostream>

using namespace std;

int array[6][4]={   {60,80,90,75},
                    {75,85,65,77},
                    {80,88,90,98},
                    {89,100,78,81},
                    {62,68,69,75},
                    {85,85,77,91}   };
int &level(int *grade,int size,int &tA,int &tB) {
    int sum=0;
    for(int i=0;i<size;i++)
        sum+=grade[i];
    return (sum/size>=80?tA:tB);
}

int main() {
    int typeA=0,typeB=0;
    int student=6;
    int gSize=4;
    for(int i=0;i<student;i++)
        level(array[i],gSize,typeA,typeB)++;
    cout<<"number of type A is "<<typeA<<endl;
    cout<<"number of type B is "<<typeB<<endl;
    return 1;
}