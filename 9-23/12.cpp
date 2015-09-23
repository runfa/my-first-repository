//写出一个模拟简单计算器的程序并运行，输入两个整数和
//一个字符，如果该字符是一个“+”则打印和，如果……。使用switch语句
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
	int a,b;
	char c,ans;
	cout<<"this plogram is a simple catulator\n";
	do
	{
	cout<<"please enter two integers\n";
	cin>>a>>b;
	cout<<"if you want the a+b result,press +\n"
		<<"if you want the a-b result,press -\n"
		<<"if you want the a*b result,press *\n"
		<<"if you want the a/b result,press /\n"
		<<"if you want the a%b result,press %\n";
	cin>>c;
	switch(c)
	{
	case('+'):
		cout<<"the result is :"<<a+b<<endl;
		break;
	case('-'):
		cout<<"the result is :"<<a-b<<endl;
		break;
	case('*'):
		cout<<"the result is :"<<a*b<<endl;
		break;
	case('/'):
		cout<<"the result is :"<<a/b<<endl;
		break;
	case('%'):
		cout<<"the result is :"<<a%b<<endl;
		break;
	default:
		cout<<"please check again\n";
	}
	cout<<"again?(y/n)\n";
	cin>>ans;
	}while(ans!='n'&&ans!='N');
	cin.get();
	
	return 0;
}

