#include <iostream>
using namespace std;
class Furniture
{
    private:
    public:
        Furniture(){}
        void setWeight(int i) {weight=i;}
        int getWeight() {return weight;}
    protected:
        int weight;
};
class Bed:virtual public Furniture
{
    public:
        Bed() {};
        void sleep() {cout<<"Sleeping...\n";}
    private:
    protected:
};
class Sofa:virtual public Furniture
{
    public:
        Sofa() {}
        void watchTV() {cout<<"Watching TV.\n";}
    private:
    protected:
};
class SleepSofa:public Bed,public Sofa
{
    public:
        SleepSofa()/*:Sofa(),Bed()*/ {}
        void foldOut() {cout<<"Fold out the sofa.\n";}
    private:
    protected:
};
int main()
{
    SleepSofa ss;
    ss.setWeight(20);
    cout<<ss.getWeight()<<endl;
}