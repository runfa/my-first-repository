//判断一个数组是否有序
#include<iostream>
using namespace std;
bool isNondecreasing(int a[],int n);
int main()
{
	int a[]={22,44,66,88,44,66,55};
	cout<<"isNondecreasing(a,4)= "<<isNondecreasing(a,4)<<endl;
	cout<<"isNondecreasing(a,7)= "<<isNondecreasing(a,7)<<endl;
	cin.get();
	return 0;
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
