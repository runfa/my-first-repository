//编写并运行一个能引起short变量负溢出的程序
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	short a=0;
	a=a-1;
	short b=-32767;
	b=b-1;
	int r=1;
	for(int i=1;i<17;i++)
	{
		r=r*2;
	}
	short c=-r+1;
	cout<<a<<endl<<b<<endl<<c<<endl;
	cout<<r<<endl;
	cout<<-r;
	cout<<endl<<sizeof(short);
	cin.get();
	return 0;
}

