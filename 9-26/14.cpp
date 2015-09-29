//写出并测试以下函数，从数组中删除一个元素
//void remove(double a[],int & n,int i)
//该函数通过将a[i]后面的n个元素依次向前移动一位来删除a[i]
#include<iostream>
using namespace std;
void remove(double a[],int & n,int i);
int main()
{
	double a[]={1,2,3,4,5,6,7,8,9,0};
	int n=3;
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	remove(a,n,6);
	for(int i=0;i<9;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	cin.get();
	return 0;
}
void remove(double a[],int & n,int i)
{
	for(int j=0;j<n;j++)
	{
		a[i+j]=a[i+j+1];
	}
	n--;
}