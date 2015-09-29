//定义一个名为Odometer的类，用以记录汽车的油耗以及行驶里程（英里）。
//该类应该包含对应的成员变量来记录汽车行驶的英里数以及燃油效率（英里/加仑）。
//类要包含一个赋值函数对里程表清零，一个赋值函数用来设置燃油效率，
//以及一个赋值函数用来接受一次旅程的总英里并将其加到里程表上，
//还需包含一个取值函数用以返回上次清零后汽车消耗的汽油（加仑）
//编写一个完整的程序，通过输入不同的燃油效率对该类进行测试。另外，如果
//该类包含成员变量，仔细考虑它的访问权限。
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