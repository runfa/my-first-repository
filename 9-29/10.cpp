/*��ĳ��ѧ����һ�β�����������һ�������ı���ֱ��ͼ�����Եĳɼ���Χ��
0~5����дһ�����򣬶����û�����Ĳ��Գɼ������û������ͬʱʹ������
�ֱ�ͳ�Ƶ÷�Ϊ0��1��2��3��4��5��ѧ������������Ӧ�ܴ�������������ѧ���ɼ���
*/
#include<iostream>
using namespace std;
int main()
{
	int grade;
	int a[6]={};
	cout<<"please enter the grade of students,end with a negative number: ";
	cin>>grade;
	while(grade>=0)
	{
		switch(grade)
		{
		case(0):
			++a[0];break;
		case(1):
			++a[1];break;
		case(2):
			++a[2];break;
		case(3):
			++a[3];break;
		case(4):
			++a[4];break;
		case(5):
			++a[5];break;
		default:
			cout<<"error\n";
		}
		cin>>grade;
	}
	for(int i=0;i<6;i++)
	{
		cout<<a[i]<<" grade(s) of "<<i<<endl;
	}
	cin.get();
	cin.get();
}