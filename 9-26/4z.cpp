//二分查找算法
#include<iostream>
using namespace std;
int index(int,int[],int);
int main()
{
	int a[]={22,33,44,55,66,77,88};
	cout<<"index(44,a,7)= "<<index(44,a,7)<<endl;
	cout<<"index(60,a,7)= "<<index(60,a,7)<<endl;
	cin.get();
	return 0;
}
int index(int x,int a[],int n)
{
	int lo=0,hi=n-1,i;
	while (lo<=hi)
	{
		i=(lo+hi)/2;
		if(a[i]==x)return i;
		if(a[i]<x)lo=i+1;
		else hi=i-1;
	}
	return n;
}



