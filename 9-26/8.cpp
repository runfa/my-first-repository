//�޸�����6-12�еĳ���ʹ���������ص�һ��Ԫ�صĵ�ַ�����Ƿ������һ��Ԫ�صĵ�ַ
//���Բ���
#include<iostream>
using namespace std;
int index(int ,int[],int);
int main()
{
	int a[]={22,44,66,88,44,66,55};
	cout<<"index(44,a,7)="<<index(44,a,7)<<endl;
	cout<<"index(55,a,7)="<<index(55,a,7)<<endl;
	cin.get();
	return 0;
}
int index(int x,int a[],int y)
{
	for(int i=y;i>=0;i--)
		if(a[i-1]==x)
			return i-1;
}