#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <list>
#include <unordered_set>
#include <functional>
#include<queue>

using namespace std;

// template<typename... T>
// void myfunc1(T... args)
// {
//     cout<<sizeof...(args)<<endl;
//     cout<<sizeof...(T)<<endl;
// }

// template<typename T,typename...U>   //这样就能控制函数中至少有一个参数
// void myfunc2(const T& firstarg,const U&... otherargs)
// {
//     cout<<sizeof...(otherargs)<<endl;
// }

// //这个函数存在的意义在于接受真正的myfunc3中不存在函数的情况
// //让递归终止
// void myfunc3()      
// {
//     cout<<"参数包展开执行完毕"<<endl;
// }

// template<typename T,typename...U>
// void myfunc3(const T& firstarg,const U&... otherargs)
// {
//     cout<<"收到的参数为"<<firstarg<<endl;
//     myfunc3(otherargs...);      //递归调用自己
// }

// template<typename... Args>
// class myclass        //主模板
// {};

// template<>
// class myclass<>
// {
//     public:
//         myclass()
//         {
//             cout<<"myclass<>::myclass<>()执行了"<<this<<endl;
//         }
// };

// template<typename First,typename... Others>
// class myclass<First,Others...>:private myclass<Others...>
// {
//     public:
//         myclass():m_i(0)
//         {
//             cout<<"myclass::myclass()执行了"<<this<<endl;
//         }
//         myclass(First parf,Others... paro):m_i(parf),myclass<Others...>(paro...)
//         {
//             cout<<"----------begin-----------"<<endl;
//             cout<<"myclass::myclass(parf,paro)执行了"<<this<<endl;
//             cout<<"m_i="<<m_i<<endl;
//             cout<<"-----------end------------"<<endl;
//         }
//         First m_i;
// };


// template<typename... Args>
// class myclass        //主模板
// {};

// template<>
// class myclass<>
// {
//     public:
//         myclass()
//         {
//             cout<<"myclass<>::myclass<>()执行了"<<this<<endl;
//         }
// };

// template<typename First,typename... Others>
// class myclass<First,Others...>
// {
//     public:
//         myclass():m_i(0)
//         {
//             cout<<"myclass::myclass()执行了"<<this<<endl;
//         }
//         myclass(First parf,Others... paro):m_i(parf),m_o(paro...)
//         {
//             cout<<"----------begin-----------"<<endl;
//             cout<<"myclass::myclass(parf,paro)执行了"<<this<<endl;
//             cout<<"m_i="<<m_i<<endl;
//             cout<<"-----------end------------"<<endl;
//         }
//         First m_i;
//         myclass<Others...> m_o;     //组合关系
// };


//mycount用于统计，从0开始，mymaxcount表示参数数量
template<int mycount,int mymaxcount,typename... T>
class myclass
{
    public:
        static void mysfunc(const tuple<T... >&t)
        {
            cout<<"value="<<get<mycount>(t)<<endl;
            //下面这一步相当于递归调用
            myclass<mycount+1,mymaxcount,T...>::mysfunc(t);
        }
};

//这里是一个特化版本，用于结束递归调用
template<int mymaxcount,typename... T>
class myclass<mymaxcount,mymaxcount,T... >
{
    public:
        static void mysfunc(const tuple<T... >&t)
        {
            cout<<"递归调用结束"<<endl;
        }
};

template<typename... T>
void myfunc(const tuple<T... >&t)
{
    myclass<0,sizeof...(T),T... >::mysfunc(t);
}

void func()
{   
    tuple<float,int,int> mytuple(12.5f,100,52); //元组定义
    myfunc(mytuple);
    /*cout<<get<0>(mytuple)<<endl;        //取元组中的值的方法
    cout<<get<1>(mytuple)<<endl;
    cout<<get<2>(mytuple)<<endl;*/
}

int main()
{
    // myfunc1();                  //没有参数的情况
    // myfunc1(10,20);             //1个参数的情况
    // myfunc1(10,25.8,"abc",'q');  //4个不同类型的参数情况

    // myfunc2(10);    //这个10对应的是firstargs所以输出的sizeof otherargs应该是0
    // myfunc2(10,"abc",12.7);  //应该是2
    // myfunc3(10);
    // myfunc3(10,"abc",12.7);

    // myclass<int,float,double> myc;
    // myclass<int,float,double> myc(12,13.5f,23);

    func();
    return 1;
}