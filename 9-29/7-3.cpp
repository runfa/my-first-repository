//带有构造函数的类
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
	int getMonthNumber();
	int getDay();
private:
	int month;
	int day;
	void testDate();
};
int main()
{
	DayOfYear date1(2,21),date2(5),date3;
	cout<<"intitalized dates:\n";
	date1.output();cout<<endl;
	date2.output();cout<<endl;
	date3.output();cout<<endl;

	date1=DayOfYear(10,31);
	cout<<"date1 reset to the following :\n";
	date1.output();cout<<endl;
	cin.get();
	return 0;
}
DayOfYear::DayOfYear(int monthValue,int dayValue):
month(monthValue),day(dayValue)
{
	testDate();
}
DayOfYear::DayOfYear(int monthValue):month(monthValue),day(1)
{
	testDate();
}
DayOfYear::DayOfYear():month(1),day(1)
{
}
void DayOfYear::testDate()
{
	if((month<1)||(month>12))
	{
		cout<<"ilegal month values\n";
		exit(1);
	} 
	if((day<1)||(day>31))
	{
		cout<<"illegal day values\n";
		exit(1);
	}
}