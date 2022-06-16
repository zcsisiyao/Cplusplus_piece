#include<iostream>
#include<string>
using namespace std;

void TestString1(){
	string s1("hello Bit");
	const string s2("Hello Bit");
	cout << s1 << " " << s2 << endl;
	cout << s1[0] << " " << s2[0] << endl;
	
	s1[0] = 'H';
	cout << s1 << endl;
	
}
void TestString2(){
	string s("hello Bit");
	for (auto ch: s){
		cout << ch << endl;
        cout << "hello" << endl;
	}
	
}


int main(){
	TestString2();
	
	return 0;
}