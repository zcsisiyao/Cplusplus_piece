#include<iostream>
using namespace std;
int main(){
	int a = 10;
	cout << "a的值: a = " << a << endl;
	cout << "a的地址: &a = " << &a << endl;
	cout << endl;
	
	int &aa = a;  //定义引用变量aa，aa和a共用同一个内存单元 
	cout << "引用变量aa的值：aa = " << aa << endl;
	cout << "引用变量aa的地址：&aa = " << &aa << endl;
	
	
	cout << endl;
	
	int* b = &a;   //指针b指向a的地址 
	cout << "b指针存储的a的地址:b = " << b << endl;
	cout << "*b表示间接访问a的值:*b = " << *b << endl;
	return 0;
}
