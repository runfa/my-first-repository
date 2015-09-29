//写出并运行一个程序，以倒序排列一个给定的正整数的各位数字
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
	int Func1(int m);
	void Func2(int m);
	//int Power(int a,int b);
	int n;
	char ans;
	do
	{
		cout<<"please enter a integer\n";
		cin>>n;
		Func2(n);
		cout<<"again?(y/n)\n";
		cin>>ans;
	}while(ans!='n'&&ans!='N');
	cin.get();
	return 0;
}
int Func1(int m)
{
	int i=1;
	int w=0;
	while(m/i)
	{
		i=i*10;
		w=w+1;
	}
	return w;
}
//int Power(int a,int b)
//{
	//int c=a;
	//for(int i=0;i<b;i++)
		//a=a*10;
	//return a/c;
//}

void Func2(int m)
{
	int w;
	w=Func1(m);
	for(int i=1;i<w+1;i++)
	{
		cout<<m%10;
		m=m/10;
	}
}