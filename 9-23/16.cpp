//¥Ú”°nn≥À∑®±Ì
#include<iostream>
using namespace std;
int main()
{
	int n;
	void Func(int m);
	char ans;
	do
	{
	cout<<"please enter a integer: \n";
	cin>>n;
	Func(n);
	cout<<"again?(y/n)\n";
	cin>>ans;
	}while(ans!='n'&&ans!='N');
	cin.get();
	return 0;
}
void Func(int m)
{
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=i;j++)
			cout<<j*i<<" ";
		cout<<endl;
	}
}