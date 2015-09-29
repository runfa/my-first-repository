//写出并测试以下函数，返回给定数组中的前n个元素中最小值的下标
//int minIndex(float a[],int n);
#include<iostream>
#include<cstdlib>
using namespace std;
int minIndex(double a[],int n);
int main()
{
	double a[]={20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
	char ans;
	int n;
	for(int i=0;i<20;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	do
	{
		cout<<"please enter n\n";
		cin>>n;
		if(n>20)
		{
			cout<<"n is two large\n";
			cin.get();
			cin.get();
			exit(1);
		}
		cout<<"the index is "<<minIndex(a,n)<<endl;
		cout<<"again?(y/n)\n";
		cin>>ans;
	}while(ans!='n'&&ans!='N');
	cin.get();
	return 0;
}
int minIndex(double a[],int n)
{
	int b,c=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		/*
		{
			if(a[i]<=a[j])
				c=c+1;
			if(c=n)
				b=i;
		}
		*/
		if(a[i]<=a[j])
			b=i;
	return b;
}
				

