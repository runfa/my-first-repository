//����һ����ΪOdometer���࣬���Լ�¼�������ͺ��Լ���ʻ��̣�Ӣ���
//����Ӧ�ð�����Ӧ�ĳ�Ա��������¼������ʻ��Ӣ�����Լ�ȼ��Ч�ʣ�Ӣ��/���أ���
//��Ҫ����һ����ֵ��������̱����㣬һ����ֵ������������ȼ��Ч�ʣ�
//�Լ�һ����ֵ������������һ���ó̵���Ӣ�ﲢ����ӵ���̱��ϣ�
//�������һ��ȡֵ�������Է����ϴ�������������ĵ����ͣ����أ�
//��дһ�������ĳ���ͨ�����벻ͬ��ȼ��Ч�ʶԸ�����в��ԡ����⣬���
//���������Ա��������ϸ�������ķ���Ȩ�ޡ�
#include<iostream>
using namespace std;
class Odemeter
{
public:
	void setMileZero();
	void setPer(double newPer);
	void setNewMile(double newMile);
	double getGas(double newMile);
	double getMile();
private:
	double mile;
	double gas;
	double per;
};
void Func(Odemeter &A,double &newPer,double &newMile);
int main()
{
	Odemeter A;
	char ans;
	double newPer1,newMile1;
	A.setMileZero();
	do
	{
		Func(A,newPer1,newMile1);
		cout<<"again?(y/n)\n";
		cin>>ans;
	}while(ans!='n'&&ans!='N');
	/*
	A.setPer(1);
	A.setNewMile(10);
	cout<<A.getGas(10)<<endl;
	cout<<A.getMile()<<endl<<endl;
	A.setPer(2);
	A.setNewMile(10);
	cout<<A.getGas(10)<<endl;
	cout<<A.getMile()<<endl<<endl;
	A.setPer(3);
	A.setNewMile(10);
	cout<<A.getGas(10)<<endl;
	cout<<A.getMile()<<endl<<endl;
	cin.get();
	*/
	cin.get();
	return 0;
}

void Odemeter::setMileZero()
{
	mile=0;
}
void Odemeter::setPer(double newPer)
{
	per=newPer;
}
void Odemeter::setNewMile(double newMile)
{
	mile=mile+newMile;
}
double Odemeter::getGas(double newMile)
{
	gas=newMile/per;
	return gas;
}
double Odemeter::getMile()
{
	return mile;
}
void Func(Odemeter &A,double &newPer,double &newMile)
{
	cout<<"please enter a per: ";
	cin>>newPer;
	A.setPer(newPer);
	cout<<"please enter a new mile: ";
	cin>>newMile;
	A.setNewMile(newMile);
	cout<<"the gas is: "<<A.getGas(10)<<endl;
	cout<<"the total mile is: "<<A.getMile()<<endl<<endl;
}