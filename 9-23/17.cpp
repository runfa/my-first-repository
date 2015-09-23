//写出并运行一个程序，使用while循环计算并打
//印一个给定数的平方和。例如，如果输入5，则程序打印出55，
//它等于1*1+2*2+3*3+4*4+5*5
#include<iostream>
using namespace std;
int main()
{
	int Func(int m);
	int n;
	char ans;
	do
	{
		cout<<"please enter a integer\n";
		cin>>n;
		cout<<"the sum is "<<Func(n)<<endl;
		cout<<"again?(y/n)\n";
		cin>>ans;
	}while(ans!='n'&&ans!='N');
	cin.get();
	return 0;
}
int Func(int m)
{
	int i=1;int sum=0;
	while(i<=m)
	{
		sum=sum+i*i;
		i++;
	}
	return sum;
}