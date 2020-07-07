#include <iostream>
#include "string.h"
using namespace std;
class Name
{
    public:
        Name() {}                           //默认构造函数
        Name(char* pN) {copyName(pN);}      //自带参数的构造函数
        Name(Name& s) {copyName(s.pName);}  //拷贝构造函数
        ~Name() {deleteName();}
        Name& operator=(Name& s)
        {
            deleteName();
            copyName(s.pName);
            return* this;
        }
        void display() {cout<<pName<<endl;}
    protected:
        void copyName(char *);
        void deleteName();
        char* pName;
};
void Name::copyName(char* pN)
{
    pName=new char[strlen(pN)+1];
    if(pName)
        strcpy(pName,pN);
}
void Name::deleteName()
{
    if(pName)
    {
        delete pName;
        //pName=0;
    }
}
int main()
{
    Name s("claudette");
    Name t("temporary");
    t.display();
    t=s;
    t.display();
}