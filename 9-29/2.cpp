//编程练习
/*定义一个名为CounterType的类，该类用来计数，可记录所有非负整数。
该类包含赋值函数来为计数赋值，还包括对计数进行增1，减1的成员函数。所有的成员函数都必须有安全检查
不能将计数改变为负值。此外，该类还包含一个返回当前计数的成员函数以及对当前计数进行输出的成员函数。类定义完成后，
编写程序对其测试*/

#include<iostream>
using namespace std;
class CountType
{
public:
	void setCount(int newCount);
	void add1();
	void reduce1();
	int getCount();
	void output();
private:
	int count;
};

int main()
{
	CountType A;
	A.setCount(3);
	A.output();
	A.add1();
	A.output();
	A.reduce1();
	A.output();
	cout<<" industry";
	cin.get();
	return 0;
}

void CountType::setCount(int newCount)
{
	count=newCount;
	if(count<0)
	{
		cout<<"error";
		exit(1);
	}
}
void CountType:: add1()
{
	count=count+1;
	if(count<0)
	{
		cout<<"error";
		exit(1);
	}
}
void CountType:: reduce1()
{
	count=count-1;
	if(count<0)
	{
		cout<<"error";
		exit(1);
	}
}
int CountType:: getCount()
{
	if(count<0)
	{
		cout<<"error";
		exit(1);
	}
	return count;
}
void CountType:: output()
{
	if(count<0)
	{
		cout<<"error";
		exit(1);
	}
	cout<<count;
}