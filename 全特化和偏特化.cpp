#include<map>
#include <iostream>

using namespace std;

// template<typename T,typename U>
// class TC   //泛化TC类模板
// {
//     public:
//     TC()
//     {
//         cout<<"泛化版本构造函数"<<endl;
//     }
//     void functest()
//     {
//         cout<<"泛化版本"<<endl;
//     }

// };

// template<>
// void TC<double,double>::functest()
// {
//     cout<<"double,double特化版本函数"<<endl;
// }

// //当T和U这两个类型模板参数都为int类型时，我们希望做一个特化版本
// //全特化：就是所有类型模板参数（这里指T和U），都得用具体的类型代表。

// template<>  //全特化，所有类型模板参数都用具体类型代表，所以<>为空
// class TC<int,int>
// {
//     public:
//     void functest()
//     {
//         cout<<"int,int特化版本"<<endl;
//     }
// };

// template<>  //全特化，所有类型模板参数都用具体类型代表，所以<>为空
// class TC<double,int>
// {
//     public:
//     // TC()
//     // {
//     //     cout<<"特化版本构造函数"<<endl;
//     // }
//     void functest()
//     {
//         cout<<"double,int特化版本"<<endl;
//     }
// };

// //泛化版本
// template<typename T,typename U,typename W>
// struct TC
// {
//     void functest()
//     {
//         cout<<"泛化版本"<<endl;
//     }
// };

// template<typename U>        //因为另外两个都会被具体类型所代替，所以该参数列表中只剩下了一个
// struct TC<int,U,double>
// {
//     void functest()
//     {
//         cout<<"int,,double偏特化版本"<<endl;
//     }
// };

// //模板参数范围上的特化版本
// template<typename T,typename U,typename W>
// struct TC<const T,U,W>
// {
//     void functest()
//     {
//         cout<<"const T,U,W偏特化版本"<<endl;
//     }
// };

//函数模板泛化版本
template<typename T,typename U>
void tfunc(T &tmprv,U &tmprv2)
{
    cout<<"tfunc泛化版本"<<endl;
    cout<<tmprv<<" "<<tmprv2<<endl;
}

template<>
void tfunc(int &tmprv,double &tmprv2)
{
    cout<<"tfunc int double特化版本"<<endl;
    cout<<tmprv<<" "<<tmprv2<<endl;
}

int main()
{
    // TC<double,double> tc1;
    // tc1.functest();




    return 1;
}
