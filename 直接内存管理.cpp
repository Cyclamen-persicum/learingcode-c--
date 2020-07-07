#include <iostream>
#include <vector>

using namespace std;




int main()
{
    //c++11中，auto可以和new配合使用，让编译器自己去推测变量的类型
    string *mystr=new string(5,'a');
    auto mystr2=new auto(mystr);        //编译器会自行推断出mystr2的类型为string **
    //const对象也可以动态分配
    const int *pointci=new const int(200);

    delete mystr;
    delete mystr2;



    return 1;
}