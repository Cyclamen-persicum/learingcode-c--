#include <iostream>
#include <cstring>
using namespace std;
class StudentID
{
    public:
        StudentID(int id=0)
        {
            value=id;
            cout<<"Assigning student id "<<value<<endl;
        }
        ~StudentID()
            {cout<<"Destrcucting id "<<value<<endl;}
    private:
        int value;
};
class Student
{
    public:
        Student(const char* className="no name",int ssID=0):id(ssID)
        {
            cout<<"Constructing student "<<className<<endl;
            strncpy(name,className,sizeof(name));
            name[sizeof(name)-1]='\0';
        }
        ~Student()
        {cout<<"destructing "<<name<<endl;}
    private:
        char name[20];
        StudentID id;
};
int main()
{
    Student s("Randy",9818);
    Student t("Jenny");
}