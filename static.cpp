#include<iostream>
using namespace std;

class A{
	public:
		A() {
			++_scount;
		}
		A(const A& t){
			++_scount;
		}
		static int GetACount(){
			return _scount;
		}
	private:
		static int _scount;
}; 

int A::_scount = 0;
int main(){
	cout << A::GetACount() << endl;
	cout << A::GetACount() << endl;
	A a1;
	cout << a1.GetACount() << endl;
	A a2;
	cout << a2.GetACount() << endl;
	A a3(a1);
	cout << A::GetACount() << endl;
	return 0;
}
