/*定义一个名为Fraction的类，用以表示两个整数的比值。该类包含相关的赋值函数用于设置分子和分母
并包含一个成员函数返回该分数的值(double 类型），此外还包含一个额外的成员函数用于输出化简后的分数。例如
该函数会把20/60化简为1/3。这就要求首先找出分子和分母的最大公因子，并分别除分子和分母。
编写一个完整的程序对你编写的函数进行测试。
*/
#include<iostream>
using namespace std;
class Fraction
{
public:
	void input();
	void output();
	double getFrac();
private:
	int up;
	int down;
};
int main()
{
	Fraction A;
	A.input();
	cout<<"the num is: "<<A.getFrac()<<endl;
	A.output();
	cin.get();
	cin.get();
	return 0;
}

void Fraction::input()
{
	cout<<"please enter the upper num: ";
	cin>>up;
	cout<<"please enter the down num: ";
	cin>>down;
}
void Fraction::output()
{
	int u=up;int d=down;int g;
	//求两个数的最大公因子
	while(u>0&&d>0)
	{
		u=u%d;
		if(u<=0)
			break;
		d=d%u;
		if(d<=0)
			break;
	}
	if(u<=0)
		g=d;
	else
		g=u;
	int u2=up/g;
	int d2=down/g;
	cout<<"\nthe fraction is: "<<u2<<"/"<<d2<<endl;
}
double Fraction::getFrac()
{
	return (static_cast<double>(up)/down);
}