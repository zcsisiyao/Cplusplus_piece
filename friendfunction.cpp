#include<iostream>
using namespace std;
class Date;
class Time{
	friend class Date; // 声明日期类为时间类的友元类，则在日期类中就直接访问Time类中的私有成员变量
	public:
		Time(int hour, int minute, int second)
			:_hour(hour)
			,_minute(minute)
			,_second(second)
		{
		}
	private:
		int _hour;
		int _minute;
		int _second;
};

class Date{
	public:
		Date(int year = 1900, int month = 1, int day = 1)
			: _year(year)
			, _month(month)
			, _day(day)
		{
		}
		void SetTimeOfDate(int hour, int minute, int second){
			_t._hour = hour;
			_t._minute = minute;
			_t.second = second;
		}
		void DisplayDate(){
			cout << _t._hour << endl;
			cout << _t._minute << endl;
			cout << _t.second << endl;
		}
	private:
		int _year;
		int _month;
		int _day;
		Time _t;
};


int main()
{
 	Data d;
 	d.SetTimeOfDate(12, 30, 56);
 	d.DisplayDate();
 	return 0; 
}
