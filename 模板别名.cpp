#include <map>
#include <iostream>

//模板参数至少有一不确定时，为模板起别名的写法
template<typename T>
using str_map_t=std::map<std::string,T>;

using FunType=int(*)(int,int);//用using定义一个函数指针

template<typename T>
using myFunc_M=int (*)(int,int);    //定义一个函数指针模板

int RealFunc(int i,int j)
{
    return i+j;
}

template<typename T1,typename T2,typename T3>
T1 sum(T2 i,T3 j)
{
    T1 result=i+j;
    return result;
}

int main()
{
    // myFunc_M<int> funcpoint;
    // funcpoint=RealFunc;     //把函数地址赋给函数指针变量
    // std::cout<<funcpoint(1,6)<<std::endl;
    auto result=sum<double,double,double>(2000000000,2000000000);
    std::cout<<result<<std::endl;

    return 1;
}