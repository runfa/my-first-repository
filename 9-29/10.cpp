/*对某班学生的一次测验结果，生成一个基于文本的直方图。测试的成绩范围：
0~5。编写一个程序，读入用户输入的测试成绩，在用户输入的同时使用数组
分别统计得分为0、1、2、3、4、5的学生个数。程序应能处理任意数量的学生成绩。
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