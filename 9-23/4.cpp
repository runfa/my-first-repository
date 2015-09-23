//编写并试运行一个程序以显示系统如何处理未经初始化的变量
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
	int a;
	double b;
	char c;
	string d;
	cout<<a<<endl<<b<<endl<<c<<endl<<endl;
	cin.get();
	return 0;
}