//修改例题6-1中的程序，使得它可以提示每个输入，并可标出每个输出
#include<iostream>
using namespace std;
int main()
{
	double a[5];
	cout<<"enter 5 numbers\n";
	for(int i=0;i<5;i++)
	{
			cout<<"a["<<i<<"]: ";
			cin>>a[i];
	}
	cout<<"in reverse order,they are:\n";
	for (int i=4;i>=0;i--)
	{
		cout<<"a["<<i<<"]: ";
			cout<<a[i];
			cout<<endl;
	}
	cin.get();
	cin.get();
	return 0;
}