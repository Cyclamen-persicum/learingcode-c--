#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
    public:
        //默认构造函数
        Complex() {complexX=0.0,complexY=0.0;}
        //带参数构造函数
        Complex(float x,float y) {complexX=x,complexY=y;}
        //+运算符重载
        Complex operator+(Complex& );
        //-运算符重载
        //Complex operator-(Complex& );
        //计算距离
        //friend double complexDistance(Complex ,Complex );
        //显示实部
        void displayX() {cout<<"实部为"<<complexX<<endl;}
        //显示虚部
        void displayY() {cout<<"虚部为"<<complexY<<endl;}
        //显示整个虚数
        void displayComplex() {cout<<complexX<<'+'<<complexY<<"i\n";}
    private:
    protected:
        float complexX,complexY;
};
Complex Complex::operator+(Complex& complex)    //不需要引用，因为是返回一个新建的Complex类对象
{
    float c=complexX+complex.complexX;
    float d=complexY+complex.complexY;
    return Complex(c,d);                        //直接返回一个无名对象即可
}
/*Complex Complex::operator-(Complex& complex)
{
    float c=complexX-complex.complexX;
    float d=complexY-complex.complexY;
    return Complex(c,d);
}
double complexDistance(Complex complex1,Complex complex2)
{
    Complex c=complex1-complex2;
    return sqrt(pow(c.complexX,2)+pow(c.complexY,2));
}*/
int main()
{
    Complex c1(-2.6,3.9);
    Complex c2(-6.1,2.7);
    Complex c3=c1+c2;
    c3.displayComplex();
    //cout<<complexDistance(c1,c2)<<endl;
    return 0;
}