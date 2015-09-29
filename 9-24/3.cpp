//写出并测试下列函数，该函数返回给定四个整数的最小值
//int min(int,int,int,int)
#include<iostream>
using namespace std;
int main()
{
	int a=1,b=2,c=3,d=4;
	int Func2(int a,int b,int c,int d);
	while(!(a==0&&b==0&&c==0&&d==0))
		{cin>>a>>b>>c>>d;
	cout<<Func2(a,b,c,d)<<endl;}
	cin.get();
	return 0;
}
int Func1(int a,int b)
{
	return(a<b?a:b);
}
int Func2(int a,int b,int c,int d)
{
	int temp1,temp2,temp3;
	temp1=Func1(a,b);
	temp2=Func1(temp1,c);
	temp3=Func1(temp2,d);
	return temp3;
}