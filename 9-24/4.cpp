//写出并测试下面的average（）函数，该函数返回四个数的平均值：
//double average(double x1,double x2,double x3,double x4);
#include<iostream>
using namespace std;
int main()
{
	int a=1,b=2,c=3,d=4;
	double average(double x1,double x2,double x3,double x4);
	while(!(a==0&&b==0&&c==0&&d==0))
	{
		cin>>a>>b>>c>>d;
	cout<<average(a,b,c,d);
	}
	cin.get();
	return 0;
}
double average(double x1,double x2,double x3,double x4)
{
	return(x1+x2+x3+x4)/4.0;
}