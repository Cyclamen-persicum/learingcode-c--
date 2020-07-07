#include <iostream>
using namespace std;
class Student;
class Teacher
{
    public:
        void assignGrades(Student& s);
    private:
    protected:
        int noOfstudent;
        Student* pList[100];
};
class Student
{
    public:
        friend void Teacher::assignGrades(Student& s);
        void printGpa();
    private:
    protected:
        Teacher* pT;
        int semesterHours;
        float gpa;
};
void Student::printGpa()
    {cout<<gpa<<endl;}
void Teacher::assignGrades(Student& s)
    {s.gpa=4.0;}
int main()
{
    Student ss;
    Teacher rr;
    rr.assignGrades(ss);
    ss.printGpa();
}