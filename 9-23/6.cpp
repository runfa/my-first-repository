//д��һ����䣬�ڱ���count����100ʱ��ʾ��too many��
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
	double a;
	char ans;
	do
	{
	cout<<"please enter a number\n";
	cin>>a;
	if(a>100)
		cout<<"too many\n";
	else
		cout<<"the number you entered is "<<a<<endl;
	cout<<"again?(y/n)\n";
		cin>>ans;
	}while(ans!='n'&&ans!='N');
	cin.get();
	cin.get();
	return 0;
}
