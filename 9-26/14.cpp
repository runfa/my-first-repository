//д�����������º�������������ɾ��һ��Ԫ��
//void remove(double a[],int & n,int i)
//�ú���ͨ����a[i]�����n��Ԫ��������ǰ�ƶ�һλ��ɾ��a[i]
#include<iostream>
using namespace std;
void remove(double a[],int & n,int i);
int main()
{
	double a[]={1,2,3,4,5,6,7,8,9,0};
	int n=3;
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	remove(a,n,6);
	for(int i=0;i<9;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	cin.get();
	return 0;
}
void remove(double a[],int & n,int i)
{
	for(int j=0;j<n;j++)
	{
		a[i+j]=a[i+j+1];
	}
	n--;
}