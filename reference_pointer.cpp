#include<iostream>
using namespace std;
int main(){
	int a = 10;
	cout << "a��ֵ: a = " << a << endl;
	cout << "a�ĵ�ַ: &a = " << &a << endl;
	cout << endl;
	
	int &aa = a;  //�������ñ���aa��aa��a����ͬһ���ڴ浥Ԫ 
	cout << "���ñ���aa��ֵ��aa = " << aa << endl;
	cout << "���ñ���aa�ĵ�ַ��&aa = " << &aa << endl;
	
	
	cout << endl;
	
	int* b = &a;   //ָ��bָ��a�ĵ�ַ 
	cout << "bָ��洢��a�ĵ�ַ:b = " << b << endl;
	cout << "*b��ʾ��ӷ���a��ֵ:*b = " << *b << endl;
	return 0;
}
