//编写一个函数判断一个整数是不是平方数
#include<iostream>
#include<cmath>
using namespace std;;
int main()
{
	double b=1;
	void Func(double n);
	while(b>=0)
	{
			cin>>b;
			Func(b);
	}
	cin.get();
	return 0;
}
void Func(double n)
{
	double a=0;
    a=static_cast<int>(sqrt(n));
	if(a*a==n)
		cout<<"true\n";
	else
		cout<<"false\n";
}