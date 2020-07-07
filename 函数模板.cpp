


template<typename T>
T funcadd(T a,T b)
{
    return a+b;
}

template<int a,int b>
int funcaddv2()
{
    return a+b;
}



int main()
{
    funcadd(5,4);
    funcaddv2<5,4>();
}