//阶乘函数与排列函数
#include<iostream>
using namespace std;
int main()
{
	//测试函数：
	/*
	int Func1(int m);
	int Func2(int n,int m);
	int n=3;
	int m=2;
	while(n!=0)
	{
		cin>>n>>m;
		cout<<"\tFunc("<<n<<","<<m<<")="<<Func2(n,m)<<"\t"<<endl;
	}
	*/
	cin.get();
	return 0;
}
int Func1(int m)
{
	int a=1;
	for(int i=m;i>0;i--)
		a=a*i;
	return a;
}
int Func2(int n,int m)
{
	return(Func1(n)/(Func1(m)*Func1(n-m)));
}