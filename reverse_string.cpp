#include<iostream>
#include<string>
using namespace std;

template<class T>
void zwap(T* left, T* right){
	T middle = *left;
	*left = *right;
	*right = middle;
}

class Solution{
	public:
		string reverseString(string s){
			int left = 0;
			int right = s.size() - 1;
			
			while (left < right){
				zwap(&s[left], &s[right]);
				left++;
				right--;
				
			} 
			
			return s;
			
		}
};
int main(){
	Solution a;
	string b = "Hello";
	cout << b << endl;
	cout << "reverse b:";
	cout << a.reverseString(b) << endl;
	return 0;
}