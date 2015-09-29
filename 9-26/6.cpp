//读入和打印一个二维数组
#include<iostream>
using namespace std;
void read(int a[][5]);
void print(const int a[][5]);

int main()
{
	int a[3][5];
	read(a);
	print(a);
	cin.get();
	cin.get();
	return 0;
}

void read(int a[][5])
{
	cout<<"enter 15 integers,5 per low\n";
	for(int i=0;i<3;i++)
	{
	cout<<"row "<<i+1<<" : ";
	for(int j=0;j<5;j++)
		cin>>a[i][j];
	}
	cout<<endl;
}
void print(const int a[][5])
{
	cout<<endl;
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<5;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
}

