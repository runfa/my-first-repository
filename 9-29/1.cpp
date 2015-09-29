//编程练习
//读取并输出学生成绩，用结构体来完成学生分数的记录
#include<iostream>
using namespace std;
struct A
{
	int test1;
	int  test2;
	int middleTest;
	int finalTest;
	double average;
	char level;
};
void getData(A& student);
void outPut(A student);
void setLevel(A& student);

int main()
{
	A s1;
	getData(s1);
	setLevel(s1);
	outPut(s1);
	cin.get();
	cin.get();
	return 0;
}

void getData(A& student)
{
	cout<<"please enter the result of test1:";
	cin>>student.test1;
	cout<<"please enter the result of test2:";
	cin>>student.test2;
	cout<<"please enter the result of middle exam:";
	cin>>student.middleTest;
	cout<<"please enter the result of final exam:";
	cin>>student.finalTest;
}
void setLevel(A& student)
{
	student.average=student.test1*0.125+student.test2*0.125+
		student.middleTest*0.25+student.finalTest*0.5;
	if(student.average>=90)
		student.level='A';
	else if(student.average>=80)
		student.level='B';
	else if(student.average>=70)
		student.level='C';
	else if(student.average>=60)
		student.level='D';
	else
		student.level='F';
}
void outPut(A student)
{
	cout<<"the result of test1: "<<student.test1<<endl
		<<"test2: "<<student.test2<<endl
		<<"middle exam: "<<student.middleTest<<endl
		<<"final test: "<<student.finalTest<<endl
		<<"average: "<<student.average<<endl
		<<"level: "<<student.level<<endl;
}


