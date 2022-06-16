#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class String{
	public:
		String(const char* str = "jack"){
			
			cout << str << endl;
			_str = (char*)malloc(strlen(str) + 1);
			strcpy(_str, str);
		}
		~String(){
			cout << "~String()" << endl;
			free(_str);
		}
	private:
		char * _str;
};
class Person{
	private:
		String _name;
		int _age;
};
int main(){
	Person p;
	return 0;
}
