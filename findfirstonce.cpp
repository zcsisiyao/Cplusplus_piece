#include<iostream>
using namespace std;

class Solution{
    public:
    int firstUniqChar(string s){
        int count[256] = {0};
        int size = s.size();
        for(int i = 0; i < size; ++i){
            count[s[i]] += 1;
        }
        for(int i = 0; i < size; ++i){
            if(1 == count[s[i]])
                return i;
        }
        return -1;
    }
};

int main(){
    Solution q1;
    string s1 = "hheello";
    int a = q1.firstUniqChar(s1);
    cout << s1 << ":" << s1[a] << endl;
    return 0;
}