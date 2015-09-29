//读入5个数字，然后按相反的顺序打印，用数组存储
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
	double a[5];
	cout<<"please enter 5 numbers\n";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"\nthe results:\n";
	for(int i=4;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
	cin.get();
	cin.get();
	return 0;
}