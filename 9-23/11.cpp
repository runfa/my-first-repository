//д��һ���������У���������������Ȼ��ʹ���������
//ʽ��������������е�һ�������Ƿ�����һ�������ı�����ӡ����multiple����not��
#include<iostream>
using namespace std;
int main()
{
	cout<<"please enter two integers\n";
	int a,b;
	cin>>a>>b;
	cout<<((a==2*b||b==2*a)?"multiple":"not")<<endl;
	cin.get();
	cin.get();
	return 0;
}