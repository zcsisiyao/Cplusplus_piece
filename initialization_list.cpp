#include<iostream>
using namespace std; 
class Data{
	public:
		Data(int year, int month, int day):
			_year(year),
			_month(month),
			_day(day)
		{}
		void Display(){
			cout << _year << _month << _day << endl;
		}
	private:
		int _year;
		int _month;
		int _day;
		
};
int main(){
	Data p(2022, 6, 22);
	p.Display();
	return 0;
}
