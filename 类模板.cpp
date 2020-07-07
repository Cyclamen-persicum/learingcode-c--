#include <string>
#include <iostream>

// template<typename T>
// class myvector
// {
//     public:
//         typedef T* myiterator;
//         myvector();
//         myvector& operator=(const myvector &);
//         myiterator mybegin();
//         myiterator myend();
//         void myfunc();
// };

// template<typename T>
// void myvector<T>::myfunc()
// {
//     return;
// }

// template<typename T>
// myvector<T>::myvector()
// {
//     return;
// }

// template<typename T>
// myvector<T>& myvector<T>::operator=(const myvector<T>&)
// {
//     return *this;
// }

// template<typename T,int size=10>
// class myarray
// {
//     private:
//         T arr[size];
//     public:
//         void func();
// };

// template<typename T,int size>
// void myarray<T,size>::func()
// {
//     std::cout<<size<<std::endl;
//     return;
// }

// template<typename T>
// typename myvector<T>::myiterator myvector<T>::mybegin() {}

//定义一个函数指针类型
typedef int (*FunType)(int,int);

int mf(int temp1,int temp2)
{
    //......
    return 1;
}

//使用函数调用
// void testfunc(int i,int j,FunType funcpoint) 
// {
//     //就可以通过函数指针调用函数
//     int result=funcpoint(i,j);//这一句就相当于去调用funcpoint指向的函数
// }

template<typename T,typename F=FunType>
void testfun1(const T &i,const T &j,F funcpoint=mf)
{
    std::cout<<funcpoint(i,j)<<std::endl;
}

class tc
{
    public:
        tc()
        {
            std::cout<<"调用构造函数"<<std::endl;
        }
        tc(const tc &t)
        {
            std::cout<<"调用拷贝构造函数"<<std::endl;
        }
        int operator()(int v1,int v2) const
        {
            return v1+v2;
        }
};

int main()
{
    // myvector<int> tmpvec;
    // myvector<double> tmpvec2;
    // myvector<std::string> tmpvec3;
    // myarray<int,100> tmparray;
    // myarray<int> tmparray2;
    // testfun1(3,4,mf);
    // tc tcobj;
    testfun1(3,4);
}