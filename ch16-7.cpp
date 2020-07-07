#include <iostream>
using namespace std;
class OBJ1
{
    public:
        OBJ1() {cout<<"OBJ1\n";}
    private:
    protected:
};
class OBJ2
{
    public:
        OBJ2() {cout<<"OBJ2\n";}
    private:
    protected:
};
class B1
{
    public:
        B1() {cout<<"B1\n";}
    private:
    protected:
};
class B2
{
    public:
        B2() {cout<<"B2\n";}
    private:
    protected:
};
class B3
{
    public:
        B3() {cout<<"B3\n";}
    private:
    protected:
};
class B4
{
    public:
        B4() {cout<<"B4\n";}
    private:
    protected:
};
class Derived:virtual public B4,public B3,public B1,virtual public B2
//第一先看继承顺序，先虚后实
{
    public:
        Derived():B3(),B4(),obj2(),obj1(),B2(),B1()//这里的顺序是无效的，怎么摆放都行
            {cout<<"Derived ok.\n";}
    private:
    protected:
        OBJ2 obj2;
        OBJ1 obj1;
    //第二看声明顺序，依据顺序逐步构造
};
int main()
{
    Derived aa;
    cout<<"This is ok.\n";
}