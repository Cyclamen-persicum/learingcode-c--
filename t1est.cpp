#include <array>
#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <string>
#include <forward_list>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <map>
#include <unordered_map>
#include <memory>

using namespace std;


int main() {
    string *const p=new string[10];
    string s;
    string *q=p;
    while(cin>>s && q!=p+10) {
        *q++=s;
    }
    const size_t size=q-p;

    delete[] p;
}