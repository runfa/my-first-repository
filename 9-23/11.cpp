//写出一个程序并运行，输入两个整数，然后使用条件表达
//式运算符，根据其中的一个整数是否是另一个整数的倍数打印出“multiple”或“not”
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