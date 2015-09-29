//写出并测试以下函数，通过引用参数返回数组中的最大值和最小值。
//void getExtremes(double &min,double&max,double a[],int n)
#include<iostream>
using namespace std;
void getExtremes(double &min,double&max,double a[],int n)
int main()
{
	cin.get();
	return 0;
}
void getExtremes(double &min,double&max,double a[],int n)
{
	min=max=a[0];
	for(int i=0;i<n;i++)
	{
		if(min>a[i])
			min=a[i];
		if(max<a[i])
			max=a[i];
	}
}

