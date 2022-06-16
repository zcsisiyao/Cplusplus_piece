#include<iostream>
using namespace std;
class Data{
	public:
		void SetDate(int year, int month, int day){
			_year = year;
			_month = month;
			_day = day;
		}
		void Display(){
			cout << _year << "-" << _month << "-"<< _day << endl;
		}
	private:
		int _year;
		int _month;
		int _day;
};

int main(){
	Data d1;
	d1.SetDate(2018, 5, 1);
	d1.Display();
	Data d2;
	d2.SetDate(2018, 7, 1);
	d2.Display();
	return 0;
}
