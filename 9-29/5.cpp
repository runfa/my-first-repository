/*����һ����ΪFraction���࣬���Ա�ʾ���������ı�ֵ�����������صĸ�ֵ�����������÷��Ӻͷ�ĸ
������һ����Ա�������ظ÷�����ֵ(double ���ͣ������⻹����һ������ĳ�Ա����������������ķ���������
�ú������20/60����Ϊ1/3�����Ҫ�������ҳ����Ӻͷ�ĸ��������ӣ����ֱ�����Ӻͷ�ĸ��
��дһ�������ĳ�������д�ĺ������в��ԡ�
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
	//�����������������
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