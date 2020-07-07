#include <ostream>
#include <iostream>
#include <functional>
#include <map>

using namespace std;

// class PrintString {
//     public:
//         PrintString(ostream &o=cout,char c=' '):os(o),sep(c) {};
//         void operator()(const string &s) const {
//             os<<s<<sep;
//         }
//     private:
//         ostream &os;
//         char sep;
// };

// class ShortString {
//     public:
//         bool operator()(const string &s1,const string &s2)const {
//             return s1.size()<s2.size();
//         }
// };

class SmallInt {
    public:
        SmallInt(int i=0):val(i) {
            if(i<0 || i>255) {
                throw std::out_of_range("Bad SmallInt value!");
            }
        }
        explicit operator int() const {
            return val;
        }
        void show() const {
            std::cout<<val<<endl;
        }
    private:
        std::size_t val;
};

int main() {
    // string s="you are good";
    // PrintString printer(cout,'\n');
    // printer(s);
    // PrintString error(cerr,'\n');
    // error(s);
    // plus<int> intAdd;
    // negate<int> intNegate;
    // int sum;
    // int add(int i,int j) {
    //     return i+j;
    // }
    // cout<<intNegate(intAdd(10,20));
    // map<string,int(*)(int,int)> binops;
    // binops.insert({"+",add});
    SmallInt si;
    // si=4;
    // //si.show();
    // SmallInt se=si+3;
    // se.show();
    si=3.14;
    // si.show();
    double se=int(si)+3.14;
    cout<<se<<endl;
}