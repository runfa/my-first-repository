//使用assert（）函数加强前提条件
#include<cassert>
#include<iostream>
using namespace std;
int index(int x,int a[],int n);
bool isNondecreasing(int a[],int n);
int main()
{
	int a[]={22,33,44,55,66,77,88,60};
	cout<<"index(44,a,7)= "<<index(44,a,7)<<endl;
	cout<<"index(44,a,7)= "<<index(44,a,8)<<endl;
	cout<<"index(60,a,7)= "<<index(60,a,8)<<endl;
	
	cin.get();
	return 0;
}

int index(int x,int a[],int n)
{
	assert(isNondecreasing(a,n));
	int lo=0,hi=n-1,i;
	while(lo<=hi)
	{
		i=(lo+hi)/2;
		if(a[i]==x)return i;
		if(a[i]<x)lo=i+1;
		else hi=i-1;
	}
	return n;
}
bool isNondecreasing(int a[],int n)
{
	int b=0;
	for(int i=0;i<n-1;i++)
		if(a[i]<a[i+1])
	/*		b=b+1;
	if (b==n-1)
		return true;
	else
		return false;
		*/
		return true;
	return false;
}
