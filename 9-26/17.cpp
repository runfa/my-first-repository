//д�����������º���
//void append(int a[],int m,int b[],int n);
//�ú���������b��ǰn��Ԫ��׷�ӵ�����a��ǰm��Ԫ��֮�󣬼ٶ�����a�������ٴ��m+m
//��Ԫ�صĿռ䡣ע��b��û�иı䣬��aֻ�ı���n��Ԫ�ء�
#include<iostream>
using namespace std;
void append(int a[],int m,int b[],int n);
int main()
{
	cin.get();
	return 0;
}
void append(int a[],int m,int b[],int n)
{
	for(int i=0;i<n;i++)
		a[m+i+1]=b[i];
}