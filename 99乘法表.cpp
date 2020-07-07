#include <iostream>
#include <iomanip>
using namespace std;
int ninenineArray[9][9];
void arrayCreate(int ninenineArray[9][9])
{
    for(int row=0;row<9;row++)
    {
        for(int line=0;line<9;line++)
            ninenineArray[row][line]=(row+1)*(line+1);
    }
}
void arrayTitlePrint()
{
    cout<<setw(2)<<'*'<<'\t';
    for(int num=1;num<10;num++)
        cout<<setw(2)<<num<<'\t';
    cout<<endl;
    for(int num=0;num<74;num++)
        cout<<'-';
    cout<<endl;
}
void arraryAllPrint()
{
    for(int row=0;row<9;row++)
    {
        cout<<setw(2)<<row+1<<'\t';
        for(int line=0;line<9;line++)
            cout<<setw(2)<<ninenineArray[row][line]<<'\t';
        cout<<endl;
    }
}
void arrayDownPrint()
{
    for(int row=0;row<9;row++)
    {
        cout<<setw(2)<<row+1<<'\t';
        for(int line=0;line<row+1;line++)
            cout<<setw(2)<<ninenineArray[row][line]<<'\t';
        cout<<endl;
    }
}
void arrayUpPrint()
{
    for(int row=0;row<9;row++)
    {
        cout<<setw(2)<<row+1<<'\t';
        for(int spaces=0;spaces<row;spaces++)
            cout<<'\t';
        for(int line=row;line<9;line++)
            cout<<setw(2)<<ninenineArray[row][line]<<'\t';
        cout<<endl;
    }
}
int main()
{
    char menu;
    while(true)
    {
        cout<<"请输入所要执行的指令："<<endl
            <<"1.输出全九九乘法表"<<endl
            <<"2.输出上三角九九乘法表"<<endl
            <<"3.输出下三角九九乘法表"<<endl;
        cin>>menu;
        arrayCreate(ninenineArray);
        arrayTitlePrint();
        switch(menu)
        {
            case '1':
                arraryAllPrint();
                break;
            case '2':
                arrayUpPrint();
                break;
            case '3':
                arrayDownPrint();
                break;
            default:
                cout<<"输入非法，请重新输入"<<endl;
        }
    }
    return 0;
}