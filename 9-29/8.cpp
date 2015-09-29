/*
����һ����ΪMonth������Ϊ�·ݵĳ����������͡���Month�����һ��in�����͵ĳ�Ա�����������·�
�����������µĳ�Ա�������������·�Ӣ�ĵ��ʵ�ǰ������ĸ�������·ݵĹ���
����������������������һ��Ĭ�Ϲ��캯�������·ݰ�������������뺯�������·ݰ�Ӣ�ĵ��ʵ�ǰ������ĸ����������Լ��������
���Լ������¸��·ݵĳ�Ա�������ó�Ա��������ֵ����ΪMonth��������ɺ󣬱�д���������в��ԡ�
*/
#include<iostream>
#include<string>
using namespace std;
class Month
{
public:
	Month(char a,char b,char c);
	Month(int n);
	Month();
	void inputN();
	void inputC();
	void outputN();
	void outputC();
private:
	int m;
	void testMonth();
};
int main()
{
	Month A('o','c','t');
	A.outputC();
	A.outputN();
	cout<<endl;
	Month B(4);
	B.outputC();
	B.outputN();
	cout<<endl;
	A.inputC();
	A.outputN();
	cout<<endl;
	B.inputN();
	B.outputC();
	cout<<endl;
	cin.get();
	cin.get();
	return 0;
}
Month::Month(char a,char b,char c)
{
	if((a=='j'||a=='J')&&(b=='a'||b=='A')&&(c=='n'||c=='N'))
		m=1;
	else if((a=='f'||a=='F')&&(b=='e'||b=='E')&&(c=='b'||c=='B'))
		m=2;
	else if((a=='m'||a=='M')&&(b=='a'||b=='A')&&(c=='r'||c=='R'))
		m=3;
	else if((a=='a'||a=='A')&&(b=='p'||b=='P')&&(c=='r'||c=='R'))
		m=4;
	else if((a=='m'||a=='M')&&(b=='a'||b=='A')&&(c=='y'||c=='Y'))
		m=5;
	else if((a=='j'||a=='J')&&(b=='u'||b=='U')&&(c=='n'||c=='N'))
		m=6;
	else if((a=='j'||a=='J')&&(b=='u'||b=='U')&&(c=='l'||c=='L'))
		m=7;
	else if((a=='a'||a=='A')&&(b=='u'||b=='U')&&(c=='g'||c=='G'))
		m=8;
	else if((a=='s'||a=='S')&&(b=='e'||b=='E')&&(c=='p'||c=='P'))
		m=9;
	else if((a=='o'||a=='O')&&(b=='c'||b=='C')&&(c=='t'||c=='T'))
		m=10;
	else if((a=='n'||a=='N')&&(b=='o'||b=='O')&&(c=='v'||c=='V'))
		m=11;
	else if((a=='d'||a=='D')&&(b=='e'||b=='E')&&(c=='c'||c=='C'))
		m=12;
	else
		cout<<"error\n";
}
Month::Month(int n):m(n)
{
	testMonth();
}
Month::Month():m(1)
{}
void Month::inputN()
{
	cout<<"enter month as a integer: ";
	cin>>m;
	testMonth();
}
void Month::inputC()
{
	char a,b,c;
	cout<<"enter first three character of month: ";
	cin>>a>>b>>c;
	//Month(a,b,c);
	if((a=='j'||a=='J')&&(b=='a'||b=='A')&&(c=='n'||c=='N'))
		m=1;
	else if((a=='f'||a=='F')&&(b=='e'||b=='E')&&(c=='b'||c=='B'))
		m=2;
	else if((a=='m'||a=='M')&&(b=='a'||b=='A')&&(c=='r'||c=='R'))
		m=3;
	else if((a=='a'||a=='A')&&(b=='p'||b=='P')&&(c=='r'||c=='R'))
		m=4;
	else if((a=='m'||a=='M')&&(b=='a'||b=='A')&&(c=='y'||c=='Y'))
		m=5;
	else if((a=='j'||a=='J')&&(b=='u'||b=='U')&&(c=='n'||c=='N'))
		m=6;
	else if((a=='j'||a=='J')&&(b=='u'||b=='U')&&(c=='l'||c=='L'))
		m=7;
	else if((a=='a'||a=='A')&&(b=='u'||b=='U')&&(c=='g'||c=='G'))
		m=8;
	else if((a=='s'||a=='S')&&(b=='e'||b=='E')&&(c=='p'||c=='P'))
		m=9;
	else if((a=='o'||a=='O')&&(b=='c'||b=='C')&&(c=='t'||c=='T'))
		m=10;
	else if((a=='n'||a=='N')&&(b=='o'||b=='O')&&(c=='v'||c=='V'))
		m=11;
	else if((a=='d'||a=='D')&&(b=='e'||b=='E')&&(c=='c'||c=='C'))
		m=12;
	else
		cout<<"error\n";
}
void Month::outputN()
{
	cout<<"the month is: "<<m<<endl;
}
void Month::outputC()
{
	string s;
	switch(m)
	{
	case(1):
		s="jan";
		break;
	case(2):
		s="feb";
		break;
	case(3):
		s="mar";
		break;
	case(4):
		s="apr";
		break;
	case(5):
		s="mar";
		break;
	case(6):
		s="jun";
		break;
	case(7):
		s="jul";
		break;
	case(8):
		s="aug";
		break;
	case(9):
		s="sep";
		break;
	case(10):
		s="oct";
		break;
	case(11):
		s="nov";
		break;
	case(12):
		s="dec";
		break;
	default:
		cout<<"error\n";
	}
	cout<<"the month is: ";
	cout<<s<<endl;
}
void Month::testMonth()
{
		if((m<1)||(m>12))
		{
			cout<<"error,illegal month\n";
			exit(1);
		}
}