//½»»»³ÌÐò
#include<iostream>
using namespace std;
int main()
{
	void swapValue(double &a,double &b);
	double a=1,b=2;
	char ans;
	do
	{
	cout<<"please enter two numbers\n";
	cin>>a>>b;
	cout<<"you entered\n "<<a<<" "<<b<<endl;
	swapValue(a,b);
	cout<<"after swapped,the num will be\n"<<a<<" "<<b<<endl;
	cout<<"again?(y/n)\n";
	cin>>ans;
	}while(ans!='n'&&ans!='N');
	cin.get();
	return 0;
}
void swapValue(double &a,double &b)
{
	double temp;
	temp=a;
	a=b;
	b=temp;
}
	
	