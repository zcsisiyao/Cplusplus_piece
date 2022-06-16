#include<iostream>
using namespace std;

template<class T1, class T2>
T1 Add(const T1& left, const T2& right){
	return left + right; 
}

int main(){
	
	int a1 = 10, a2 = 20;
	double d1 = 10.0, d2 = 20.0;
	cout << Add(a1, d1) << endl;
	
	return 0;
}
