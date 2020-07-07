#include <iostream>
#include <cstring>
using namespace std;
class Student
{
    private:
        char name[40];
        int id;
    protected:
    public:
    Student(char* pName="No name",int ssID=0)
    {
        strncpy(name,pName,40);
        name[39]='\0';
        id=ssID;
        cout<<"Constructing new student "<<pName<<endl;
    }
    Student(Student& s)
    {
        cout<<"Constructing copy of "<<s.name<<endl;
        strcpy(name,"copy of ");
        strcat(name,s.name);
        id=s.id;
    }
    ~Student()
        {cout<<"Destructing "<<name<<endl;}
};
void fn(Student s)
    {cout<<"In function fn()\n";}
int main()
{
    Student randy("Randy",1234);
    cout<<"Call fn()\n";
    fn(randy);
    cout<<"Returned from fn()\n";
}