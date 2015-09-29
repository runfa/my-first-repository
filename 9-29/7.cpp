/*编写一个名为Money的类来记录一定的美元数。该类包含两个私有成员变量分别
记录美元数和美分数。为该类添加相关的取值、赋值函数对这两个私有成员进行操作，
此外为该类添加一个函数以double类型返回最终的美元数，编写相关的程序
对Money类进行完整的测试*/
#include<iostream>
#include<cstdlib>
using namespace std;
class Money
{
public:
	void setD(int newDollar);
	void setC(int newCent);
	int getD();
	int getC();
	double getMoney();
private:
	int dollar;
	int cent;
};
int main()
{
	Money A;
	A.setC(45);
	A.setD(40);
	cout<<"cent="<<A.getC()<<endl;
	cout<<"dollar="<<A.getD()<<endl;
	cout<<"money="<<A.getMoney()<<endl;
	cin.get();
	return 0;
}

void Money::setD(int newDollar)
{
	if(newDollar<0)
	{
		cout<<"error";
		exit(1);
	}
	dollar=newDollar;
}
void Money::setC(int newCent)
{
	if(newCent<0)
	{
		cout<<"error";
	exit(1);
	}
	cent=newCent;
}
int Money::getD()
{
	return dollar;
}
int Money::getC()
{
	return cent;
}
double Money::getMoney()
{
	double a=cent/100.0;
	return (dollar+a);
}