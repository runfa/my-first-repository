//打印出不超过输入数字的所有的fibonacci数字
#include<iostream>
using namespace std;
int main()
{
	void Func(long x);
	long a;
	char ans;
	do
	{
	cout<<"please enter a positive integer \n";
	cin>>a;
	Func(a);
	cout<<"again?(y/n)\n";
	cin>>ans;
	}while(ans!='n'&&ans!='N');
	cin.get();
	return 0;
}
void Func(long x)
{
	int a=0;int b=1;
	cout<<a<<" "<<b<<" "<<endl;
	while(a<x&&b<x)
	{
		a=a+b;
		b=a+b;
		cout<<a<<" "<<b<<" "<<endl;
	}
}
