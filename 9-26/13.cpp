//写出并测试以下函数，通过引用参数返回数组中的最大值和第二大值
#include<iostream>
using namespace std;
void largest(double& max1,double&max2,double a[],int n);
int main()
{
	double a[]={12,1,12.3,12.5,56,47};
	for(int i=0;i<6;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	double c,b;
	int n=0;
	while(n<7)
	{
		cin>>n;
		largest(c,b,a,n);
		cout<<c<<" "<<b<<endl;
	}
	cin.get();
	cin.get();
	return 0;
}
void largest(double& max1,double&max2,double a[],int n)
{
	max1=max2=a[0];
	if(n==1)
	{}
	else
	{
	int d=0,e=0;
	for(int i=0;i<n;i++)
		if(max1<a[i])
		{
				max1=a[i];
				d=i;
		}
	for(int i=0;i<d;i++)
		if(max2<=a[i])
		{
			max2=a[i];
			e=i;
		}
		if(d==e)
			max2=a[d+1];
	for(int i=d+1;i<n;i++)
		if(max2<a[i])
			max2=a[i];
	}
}
			