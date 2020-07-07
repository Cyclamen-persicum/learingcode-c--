#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <list>
#include <unordered_set>
#include <functional>
#include<queue>

using namespace std;
template<typename T,template<typename U> class Container>        //模板模板类
class myclass
{
    public:
        T m_i;
        Container<T> myc;   //作为一个类模板来使用的
        myclass()
        {
            for(int i=0;i<10;++i)
            {
                myc.push_back(i);
            }
        }
};

//因为vector是有第二参数allocator的
//但是在下面实例化myvecobj时，系统无法推断出allocator的类型
//所以需要我们手动为其设置
// template<typename T>
// using myvec=vector<T,allocator<T>>;     

int main()
{
    // myclass<int,myvec> myvecobj;



    return 1;
}