//写出并测试以下函数，返回给定数组中的前n个元素的最小值
//doouble min(double a[],int n)
#include<iostream>
#include<cstdlib>
using namespace std;
double min(double a[],int n);
int main()
{
	int n=0;
	double a[]={2,12,3,12,23,54,12,334,1223,12,2,3,4,5,6,6,8,8,9,0,4,3,2,1,-1,3,1,3,-3,12};
	for(int i=0;i<30;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	while(n>=-10)
	{
		cin>>n;
		if(n>27)
		{
			cout<<"the number is too big\n";
			cin.get();
			cin.get();
			exit(1);
		}

		cout<<"the min is "<<min(a,n)<<endl;
	}
	cin.get();
	return 0;
}
double min(double a[],int n)
{
	double b=a[0];
	for(int i=0;i<n;i++)
	{
		if(b>a[i])
			b=a[i];
	}
	return b;
}
