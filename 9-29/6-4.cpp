//包含私有成员的类
#include<iostream>
#include<cstdlib>
using namespace std;

class DayOfYear
{
public:
	void input();
	void output();
	void set(int newMonth,int newDay);
	void set(int newMonth);
	int getMonthNumber();
	int getDay();
private:
	int month;
	int day;
};
int main()
{
	DayOfYear today,bachBirthday;
	cout<<"enter today's date\n";
	today.input();
	cout<<"today's date is ";
	today.output();
	cout<<endl;

	bachBirthday.set(3,21);
	cout<<"j s bach's birthday is ";
	bachBirthday.output();
	cout<<endl;
	if(today.getMonthNumber()==bachBirthday.getMonthNumber()&&today.getDay()==bachBirthday.getDay())
		cout<<"happy birthday johann sebstian!\n";
	else
		cout<<"happy unbirthday johann sebstian!\n";
	cin.get();
	cin.get();
	return 0;
}


void DayOfYear::set(int newMonth,int newDay)
{
	if((newMonth>=1)&&(newMonth<=12))
		month=newMonth;
	else
	{
		cout<<"illegal month value!program aborted.\n";
		exit(1);
	}
	if((newDay>=1)&&(newDay<=31))
		day=newDay;
	else
	{
		cout<<"illegal day value!program aborted.\n";
		exit(1);
	}
}
void DayOfYear::set(int newMonth)
{
	if((newMonth>=1)&&(newMonth<=12))
		month=newMonth;
	else
	{
		cout<<"illegal month value!program aborted.\n";
		exit(1);
	}
	day=1;
}
int DayOfYear::getMonthNumber()
{
	return month;
}
int DayOfYear::getDay()
{
	return day;
}
void DayOfYear::input()
{
	cout<<"enter the month as a number";
	cin>>month;
	cout<<"enter the day of the month";
	cin>>day;
	if((month<1)||(month>12)||(day<1)||(day>31))
	{
		cout<<"illeagl date!program aborted\n";
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
