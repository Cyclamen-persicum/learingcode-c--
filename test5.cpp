#include <iostream>
#include <iomanip>
using namespace std;
struct Student
{
    long number;
    float score;
    Student* next;
};
Student* head;
Student* getNode()
{
    int num;
    float sc;
    cin>>num>>sc;
    if(num==0)
        return NULL;
    Student* p=new Student;
    p->number=num;
    p->score=sc;
    p->next=0;
    return p;
}
void Create()
{
    if((head=getNode())==0)
        return;
    for(Student* pE=head,*pS;pS=getNode();pE=pS)
        pE->next=pS;
}
void showList()
{
    cout<<"Now the items of list are \n";
    for(Student* p=head;p;p=p->next)
        cout<<p->number<<" "<<p->score<<endl;
}
void insertNode(Student& stud)
{
    Student* pS=new Student;
    *pS=stud;
    if(!head||pS->number<head->number)
    {
        pS->next=head;
        head=pS;
        return;
    }
    Student* pGurad=head;
    for(Student* p=pGurad->next;p;pGurad=p,p=p->next)
    {
        if(pS->number<p->number)
        {
            pS->next=p;
            pGurad->next=pS;
            return;
        }
    }
    pGurad->next=pS;
    pS->next=NULL;
}
void deleteNode(long num)
{
    if(!head)
    {
        cout<<"\nList null\n";
        return;
    }
    Student* pGuard=head;
    if(pGuard->number==num)
    {
        head=head->next;
        delete pGuard;
        cout<<"The head of list have been deleted.\n";
        return;
    }
    for(Student* p=pGuard->next;p;pGuard=p,p=p->next)
    {
        if(p->number==num)
        {
            pGuard->next=p->next;
            delete p;
            cout<<"No."<<num<<"node have been deleted.\n";
            return;
        }
    }
    cout<<num<<" is not found.";
}
int main()
{
    Create();
    showList();
    deleteNode(8);
    Student ps={36,3.8};
    insertNode(ps);
    showList();
}