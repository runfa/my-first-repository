//д��һ�����Ԫ����ʽ�ĳ��򲢲��ԡ�һ����Ԫ����ʽ��
//����axx+bx+c=0�ĵ�ʽ������a��b��cΪ������ϵ����xΪδ֪����ʹ��x1��x
//2��Ϊ����Ľ⡣
#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
	void Ans(double x,double y,double z);
	double a=0,b=0,c=0;
	char ans;
	cout<<"this program is aim to get the x from axx+bx+c=0\n";
	do
	{
	cout<<"please enter a,b,c\n";
	cin>>a>>b>>c;
	Ans(a,b,c);
	cout<<"again?(y/n)\n";
	cin>>ans;
	}while(ans!='n'&&ans!='N');
	cin.get();
	return 0;
}
void Ans(double x,double y,double z)
{
	double delta,x1,x2;
	if(x==0)
	{
		cout<<"error,the first number can't be zero.";
		cin.get();
		cin.get();
		exit(1);
	}
	else
	{
	if(y*y-4*x*z<0)
		cout<<"this proglam can't work out x with such a,b,c\n";
	else
	{
		delta=sqrt(y*y-4*x*z);
		x1=((-y+delta)/(2*x));
		x2=((-y-delta)/(2*x));
		cout<<"x1= "<<x1<<endl<<"x2= "<<x2<<endl;
	}
	}
}


