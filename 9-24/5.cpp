//写一个程序使用comb（）函数打印Pascal三角的前12行
#include<iostream>
using namespace std;
int main()
{
	int Func1(int n);
	int Func2(int n,int m);
	void Func3(int l);
	char ans;
	int n;
	do
	{
	cout<<"please enter a integer(<13):\n";
	cin>>n;
	Func3(n);
	cout<<"\nagain?(y/n)\n";
	cin>>ans;
	}
	while(ans!='n'&&ans!='N');
	cin.get();
	return 0;
}
int Func1(int n)
{
	int a=1;
	for(int i=n;i>0;i--)
		a=a*i;
	return a;
}
int Func2(int n,int m)
{
	return Func1(n)/(Func1(m)*Func1(n-m));
}
void Func3(int l)
{
		for(int i=0;i<=l;i++)
		{
			for(int k=0;k<=i;k++)
				cout<<Func2(i,k)<<" ";
			cout<<endl;
		}
}