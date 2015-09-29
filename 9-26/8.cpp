//修改例题6-12中的程序，使得它不反回第一个元素的地址，而是返回最后一个元素的地址
//线性查找
#include<iostream>
using namespace std;
int index(int ,int[],int);
int main()
{
	int a[]={22,44,66,88,44,66,55};
	cout<<"index(44,a,7)="<<index(44,a,7)<<endl;
	cout<<"index(55,a,7)="<<index(55,a,7)<<endl;
	cin.get();
	return 0;
}
int index(int x,int a[],int y)
{
	for(int i=y;i>=0;i--)
		if(a[i-1]==x)
			return i-1;
}