#include<iostream>
#include<string>

using namespace std;

void Test1(){
	// ע�⣺string�����֧��ֱ����cin��cout������������
	string s("hello, bit!!!");
	cout << s.size() << endl;
	cout << s.length() << endl;
	cout << s.capacity() << endl;
	cout << s << endl;
	// ��s�е��ַ�����գ�ע�����ʱֻ�ǽ�size��0�����ı�ײ�ռ�Ĵ�С
	s.clear();
	cout << s.size() << endl;
	cout << s.capacity() << endl;
	// ��s����Ч�ַ��������ӵ�10�������λ����'a'�������
 	// ��aaaaaaaaaa��
	s.resize(10, 'a');
	cout << s.size() << endl;
	cout << s.capacity() << endl;
	// ��s����Ч�ַ��������ӵ�15�������λ����ȱʡֵ'\0'�������
 	// "aaaaaaaaaa\0\0\0\0\0"
 	// ע���ʱs����Ч�ַ������Ѿ����ӵ�15��
 	s.resize(15);
 	cout << s.size() << endl;
 	cout << s.capacity() << endl;
 	cout << s << endl;
	
	
	// ��s����Ч�ַ�������С��5��
	s.resize(5);
	cout << s.size() << endl;
	cout << s.capacity() << endl;
	cout << s << endl;
}
void Test2(){
	string s;
	// ����reserve�Ƿ��ı�string����ЧԪ�ظ���
	s.reserve(100);
	cout << s.size() << endl;
	cout << s.capacity() << endl;
	// ����reserve����С��string�ĵײ�ռ��Сʱ���Ƿ�Ὣ�ռ���С
	s.reserve(50);
	cout << s.size() << endl;
	cout << s.capacity() << endl;
}
void TestPushBack(){
	string s;
	size_t sz = s.capacity();
	cout << "making s grow:\n";
	for(int i = 0; i < 100; ++i){
		s.push_back('c');
		if(sz != s.capacity()){
			sz = s.capacity();
			cout << "capacity changed: " << sz << '\n';
		}
	}
}
// ����reserve��߲������ݵ�Ч�ʣ��������ݴ����Ŀ���
void TestPushReserve(){
	string s;
	s.reserve(100);
	size_t sz = s.capacity();
	cout << sz << endl;
	cout << "making s grow:\n";
	for (int i = 0; i < 100; ++i){
		s.push_back('c');
		if (sz != s.capacity()){
			sz = s.capacity();
			cout << "capacity changed: " << sz << endl;
		}
	}
}

int main(){
	Test1();
	//Test2();
	//TestPushBack();
	//TestPushReserve();
	return 0;
}
