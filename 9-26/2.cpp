//√∞≈›≈≈–ÚÀ„∑®
#include<iostream>
using namespace std;
void print (double[],int);
void sort(double[],int);
int main()
{
	double a[]={55.5,22.5,99.9,66.6,44.4,88.8,33.3,77.7};
	print (a,8);
	sort(a,8);
	print(a,8);
	cin.get();
	return 0;
}
void print(double a[],int b)
{
	for(int i=0;i<b;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
void sort(double a[],int b)
{
	double temp;
	for(int i=0;i<b;i++)
		for(int j=i;j<b;j++)
		{
				if(a[i]<a[j])
				{
					temp=a[i];
				    a[i]=a[j];
				    a[j]=temp;
				}
		}
}