//����ϰ����ϵ�һ�����⣬����֮ǰûѧ����������<cctype>����ԭ�ⲻ���س�����
#include<cctype>
#include<iostream>
using namespace std;
void printCharCategory(char c);
int main()
{
	for(int c=0;c<128;c++)
	{
		cout<<c<<" :";
		printCharCategory(c);
	}
	cin.get();
	return 0;
}
void printCharCategory(char c)
{
	cout<<"the character ["<<c<<"] is a ";
	if (isdigit(c)) cout<<"dight.\n";
	else if(islower(c)) cout<<"lower-case letter.\n";
	else if(isupper(c))cout<<"capital letter.\n";
	else if(isspace(c))cout<<"white space character\n";
	else if(iscntrl(c))cout<<"control character\n";
	else if (ispunct(c))cout<<"punctuation mark\n";
	else cout<<"error\n";
}

