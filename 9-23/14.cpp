//����һ������n������1+2+3+����+n�ĺ�,����while���
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
	int n;
	int i=1;
	int sum=0;
	char ans;
	do
	{
	cout<<"please enter n:\n";
	cin>>n;
	
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	cout<<"sum= "<<sum<<endl;
	cout<<"again?(y/n)\n";
	cin>>ans;
	}while(ans!='n'&&ans!='N');

	cin.get();
	return 0;
}

