//��дһ����Ӣ��ת��Ϊ���׵ĳ���
#include<iostream>
using namespace std;
int main()
{
	const double r=2.54;
	double fitNum;
	char ans;
	do
	{
	cout<<"please enter the fit figure\n";
		cin>>fitNum;
		cout<<fitNum<<" fit equals "<<fitNum*r<<" cm\n";
		cout<<"again?(y\n)\n";
		cin>>ans;
	}while(ans!='n'&&ans!='N');
		cin.get();
		return 0;
}
