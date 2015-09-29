//写出并测试以下函数，从数组中删除一个元素
//void removeFirst(double a[],int& n,double x)
//该函数在数组的前n个元素中查找x，如果找到，则删除
//找到的第一个x，该位置后的所有元素依次向前移动一位，n-1，并
//返回true表示删除成功。如果未找到x，则数组不变，并返回false
#include<iostream>
using namespace std;
bool removeFirst(double a[],int& n,double x);
int main()
{
	double a[]={1,2,3,4,5,6,7,8,9,10};
	int n=6;
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	bool c;
	c=removeFirst(a,n,5);
	cout<<"c= "<<c<<endl;
	cin.get();
	return 0;
	/*bool d=4;
	cout<<d;
	cin.get();*/
}
bool removeFirst(double a[],int& n,double x)
{
	int b;
	for(int i=0;i<n;i++)
	{
		/*if(x!=a[i])
			return false;
	    else
		{
			b=i;
			for(int j=b;j<10;j++)
				a[j]=a[j+1];
			n=n-1;
			return true;
		}
	}*/
		
		if(x==a[i])
		{
			b=i;
		for(int j=b;j<10;j++)
			a[j]=a[j+1];
		n=n-1;
		for(int i=0;i<9;i++)
		cout<<a[i]<<" ";
		cout<<endl;
		return true;
		}
	}
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return false;	
}