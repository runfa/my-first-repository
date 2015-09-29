//一个类的对象可以作为成员变量出现在另一个类的定义中。这种情况下一般不需要做什么特殊处理，但如果在外层类
//的构造函数中初始化该成员变量，则需要用到特殊的符号
#include<iostream>
#include<cstdlib>
using namespace std;

class DayOfYear
{
public:
	DayOfYear(int monthValue,int dayValue);
	DayOfYear(int monthValue);
	DayOfYear();
	void input();
	void output();
	//void set(int newMonth,int newDay);
	//void set(int newMonth);
	int getMonthNumber();
	int getDay();
private:
	int month;
	int day;
	void testDate();
};
class Holiday
{
public:
	Holiday();
	Holiday(int month,int day,bool theEnforcement);
	void output();
private:
	DayOfYear date;
	bool parkingEnforcement;
};
int main()
{
	Holiday h;
	cout<<"testing the class holiday.\n";
	h.output();
	cin.get();
	return 0;
}
Holiday::Holiday()
	:date(1,1),parkingEnforcement(true)
{}
Holiday::Holiday(int month,int day,bool theEnforcement)
	:date(month,day),parkingEnforcement(theEnforcement)
{}
 void Holiday::output()
{
	date.output();
	cout<<endl;
	if(parkingEnforcement)
		cout<<"parking laws will be enforced\n";
	else
		cout<<"parking laws will not be enforced\n";
}
DayOfYear::DayOfYear(int monthValue,int dayValue)
	:month(monthValue),day(dayValue)
{
	testDate();
}
DayOfYear::DayOfYear(int monthValue)
	:month(monthValue),day(1)
{}
DayOfYear::DayOfYear()
	:month(1),day(1)
{}
void DayOfYear::testDate()
{
	if((month<1)||(month>12))
	{
		cout<<"illegal month value\n";
		exit(1);
	}
	if((day<1)||(day>31))
	{
		cout<<"illegal day value\n";
		exit(1);
	}
}
void DayOfYear::output()
{
	switch(month)
	{
	case 1:
			cout<<"january ";break;
	case 2:
		cout<<"febrary ";break;
	case 3:
		cout<<"march ";break;
	case 4:
		cout<<"april;";break;
	case 5:
		cout<<"may ";break;
	case 6:
		cout<<"june ";break;
	case 7:
		cout<<"july ";break;
	case 8:
		cout<<"august ";break;
	case 9:
		cout<<"september ";break;
	case 10:
		cout<<"octuber ";break;
	case 11:
		cout<<"november ";break;
	case 12:
		cout<<"devember ";break;
	default:
		cout<<"error in DayOfYear::output.";
	}
	cout<<day;

}
int DayOfYear::getMonthNumber()
{
	return month;
}
int DayOfYear::getDay()
{
	return day;
}