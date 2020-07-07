#include <vector>
#include <iostream>

using namespace std;

class Solution {
    public:
    int lastRemaining(int n, int m) {
        vector<int> vec;
        for(int i=0;i<n;++i) {
            vec.push_back(i);
        }
        int it=0;
        int size=vec.size();
        while(size!=1) {
            int count=m%size;
            it+=count;
            if (count != 0) it -= 1;
            if(it>=size) {
                it=it-size;
            }
            vec.erase(vec.begin()+it);
            size--;
        }
        return vec[0];
    }
};

int main() {
    Solution a;
    cout<<a.lastRemaining(5,3);
    return 0;
}