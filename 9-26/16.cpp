//写出并测试以下函数
//void rotate (int a[],int n,int k);
//该函数”旋转“数组a的前n个元素，将其右边的k个元素
//（如果k为负数，则取左边的-k个元素）移动到数组的开始位置
#include<iostream>
using namespace std;
void rotate (int a[],int n,int k);
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,0};
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	rotate(a,9,4);
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	rotate(a,10,-5);
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	cin.get();
	return 0;
}
/*
void rotate (int a[],int n,int k)
{
	if(k>0)
	{
		for(int i=n-1;i>=n-k;i--)
		{
			for(int j=i;j>0;j--)
			{
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
	if(k<0)
	{
		rotate(a,n,n+k);
	}
}*/
void rotate (int a[],int n,int k)
{
	if(k>0)
	{
		for(int i=0;i<k;i++)
		{
			for(int j=n-1;j>0;j--)
			{
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
	if(k<0)
	{
	for(int i=0;i<k+n;i++)
		{
			for(int j=n-1;j>0;j--)
			{
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}	
	}
}