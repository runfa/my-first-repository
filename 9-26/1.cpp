//ÏßĞÔ²éÕÒ
#include<iostream>
using namespace std;
int index(int ,int[],int);
int main()
{
	int a[]={22,44,66,88,44,66,55};
	cout<<"index(44,a,7)="<<index(44,a,7)<<endl;
	cout<<"index(50,a,7)="<<index(50,a,7)<<endl;
	cin.get();
	return 0;
}
int index(int x,int a[],int y)
{
	for(int i=1;i<=y;i++)
		if(a[i-1]==x)
			return i-1;
}