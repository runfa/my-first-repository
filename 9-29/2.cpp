//�����ϰ
/*����һ����ΪCounterType���࣬���������������ɼ�¼���зǸ�������
���������ֵ������Ϊ������ֵ���������Լ���������1����1�ĳ�Ա���������еĳ�Ա�����������а�ȫ���
���ܽ������ı�Ϊ��ֵ�����⣬���໹����һ�����ص�ǰ�����ĳ�Ա�����Լ��Ե�ǰ������������ĳ�Ա�������ඨ����ɺ�
��д����������*/

#include<iostream>
using namespace std;
class CountType
{
public:
	void setCount(int newCount);
	void add1();
	void reduce1();
	int getCount();
	void output();
private:
	int count;
};

int main()
{
	CountType A;
	A.setCount(3);
	A.output();
	A.add1();
	A.output();
	A.reduce1();
	A.output();
	cout<<" industry";
	cin.get();
	return 0;
}

void CountType::setCount(int newCount)
{
	count=newCount;
	if(count<0)
	{
		cout<<"error";
		exit(1);
	}
}
void CountType:: add1()
{
	count=count+1;
	if(count<0)
	{
		cout<<"error";
		exit(1);
	}
}
void CountType:: reduce1()
{
	count=count-1;
	if(count<0)
	{
		cout<<"error";
		exit(1);
	}
}
int CountType:: getCount()
{
	if(count<0)
	{
		cout<<"error";
		exit(1);
	}
	return count;
}
void CountType:: output()
{
	if(count<0)
	{
		cout<<"error";
		exit(1);
	}
	cout<<count;
}