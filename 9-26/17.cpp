//写出并测试以下函数
//void append(int a[],int m,int b[],int n);
//该函数将数组b的前n个元素追加到数组a的前m个元素之后，假定数组a具有至少存放m+m
//个元素的空间。注意b并没有改变，且a只改变了n个元素。
#include<iostream>
using namespace std;
void append(int a[],int m,int b[],int n);
int main()
{
	cin.get();
	return 0;
}
void append(int a[],int m,int b[],int n)
{
	for(int i=0;i<n;i++)
		a[m+i+1]=b[i];
}