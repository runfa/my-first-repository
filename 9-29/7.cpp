/*��дһ����ΪMoney��������¼һ������Ԫ���������������˽�г�Ա�����ֱ�
��¼��Ԫ������������Ϊ���������ص�ȡֵ����ֵ������������˽�г�Ա���в�����
����Ϊ�������һ��������double���ͷ������յ���Ԫ������д��صĳ���
��Money����������Ĳ���*/
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