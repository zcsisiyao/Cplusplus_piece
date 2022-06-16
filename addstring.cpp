#include<iostream>
#include<string>
using namespace std;

class Solution{
    public:
        string addStrings(string num1, string num2){
            int end1 = num1.size() - 1, end2 = num2.size() - 1;
            int one = 0, two = 0, sums = 0, carry = 0;
            string str1("");
            for( ; end1 >= 0 || end2 >= 0; --end1, --end2){
                if(end1 >= 0){
                    one = (int)num1[end1];
                }
                else{
                    one = 0;
                }
                if(end2 >= 0){
                    two = (int)num2[end2];
                }
                else{
                    two = 0;
                }
                sums = two + one + carry;
                carry = sums / 10;
                str1 = (string)(sums % 10) + str1;

            }
            if(carry > 0){
                return "1" + str1;
            }
            else{
                return str1;
            }
        }
};

int main(){
    Solution solu1;
    string s1 = "123", s2 = "11";
    cout << s1 << " + " << s2 << ":" << endl;
    cout << solu1.addStrings(s1, s2) << endl;
}