#include<iostream>

using namespace std;

void swap(int &x,int &y) {
    int temp=x;
    x=y;
    y=temp;
}

int main() {
    int x=5,y=6;
    cout<<"before swap,x:"<<x<<",y:"<<y<<endl;
    swap(x,y);
    cout<<"after swap,x:"<<x<<",y:"<<y<<endl;
}