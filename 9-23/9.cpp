//比较三个不同的数之间的大小
#include<iostream>
using namespace std;
int main()
{
	double a, b,c;
	double temp1,temp2;
	char ans;
	do
	{
	cout<<"please enter three different numbers:\n";
	cin>>a>>b>>c;
	temp1=max(a,b);
	temp2=max(temp1,c);
	cout<<"the max number is : "<<temp2<<endl;
	if(temp1<c)
		cout<<"the middle number is : "<<temp1<<endl;
	else
	{
		cout<<"the middle number is : "<<max(min(a,b),c)<<endl;
	}
	cout<<"again?(y/n)"<<endl;
	cin>>ans;
	}while(ans!='n'&&ans!='N');

	cin.get();
	return 0;	
}
double max(double x,double y)
{
	if(x>=y)
		return x;
	else
		return y;
}
double min(double x,double y)
{
	if (x>=y)
		return y;
	else
		return x;
}