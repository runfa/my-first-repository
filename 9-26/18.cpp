//写出并测试一个函数，将一个二维数组顺时针旋转90度
#include<iostream>
using namespace std;
double func(double a[][3]);
int main()
{
	double a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<a[i][j];
		cout<<endl;
	}
	func(a);

	cin.get();
	return 0;
}
double func(double a[][3])
{
	double b[3][3];
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			b[i][j]=a[j][i];
	cout<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cout<<b[i][j];
		cout<<endl;
	}

	return b[3][3];
}
