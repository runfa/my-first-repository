//�޸�����6-1�еĳ���ʹ����������ʾÿ�����룬���ɱ��ÿ�����
#include<iostream>
using namespace std;
int main()
{
	double a[5];
	cout<<"enter 5 numbers\n";
	for(int i=0;i<5;i++)
	{
			cout<<"a["<<i<<"]: ";
			cin>>a[i];
	}
	cout<<"in reverse order,they are:\n";
	for (int i=4;i>=0;i--)
	{
		cout<<"a["<<i<<"]: ";
			cout<<a[i];
			cout<<endl;
	}
	cin.get();
	cin.get();
	return 0;
}