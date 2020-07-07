#include <iostream>
#include "string.h"
using namespace std;
class Advisor
{
    private:
        int noOfmeeting;
    public:
    protected:
};
class Student
{
    private:
        char name[40];
        int semesterHours;
        float average;
    public:
        Student (const char* pName="no name")
        {
            strncpy(name,pName,sizeof(name));
            average=semesterHours=0;
        }
        void addCourse(int hours,float grade)
        {
            average=(semesterHours*average+grade);
            semesterHours+=hours;
            average/=semesterHours;
        }
        int getHours()
            {return semesterHours;}
        float getAverage()
            {return average;}
        void display()
            {cout<<"name=\""<<name<<"\",hours="<<semesterHours<<",average="<<average<<endl;}
    protected:
};
class GraduateStudent:public Student
{
    private:
        Advisor advisor;
        int qualifierGrade;
    public:
        int getQualifier()
            {return qualifierGrade;}
    protected:
};
int main()
{
    Student ds("Lo lee undergrade");
    GraduateStudent gs;
    ds.addCourse(3,2.5);
    ds.display();
    gs.addCourse(3,3.0);
    gs.display();
}