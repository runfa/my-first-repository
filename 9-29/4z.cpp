/*编写一个名为GasPump的类，该类将用于模拟汽车加油站的油泵。在具体编写代码之前，试着从加油站的角度考虑所期望的
油泵的行为。
下面给出一些可能的行为，可以根据情况再添加相关的方法，最后在类的定义中实现这些行为：
a 显示总的加油量
b 显示总的加油量对应的费用
c 显示单位油量的费用
d 在下次加油之前，油泵应该将总的加油量和总的费用清零
e 加油一旦开始，随着油量的输出，总的加油量和总的费用应同时变化，直到加油结束。
f在某些情况下，还要让油泵停止加油
将上面的行为声明为GasPump的成员函数，并给出这些成员函数的实现代码。
另外，讨论Gaspump需要保存的而用户又无权访问的数据，将这些数据设置为私有变量。
*/
#include<iostream>
using namespace std;
class GasPump
{
public:
	void showGas();
    void showFee();
    void showPer();
    void setZero();
	void begin();
    bool full();
private:
	double gas;
	double fee;
	double per;
};

int main()
{
	cin.get();
	return 0;
}
void GasPump::showGas()
{
	cout<<"gas= "<<gas<<endl;
}
void GasPump::showFee()
{
	cout<<"fee= "<<fee<<endl;
}
void GasPump::showPer()
{
	cout<<"per+ "<<endl;
}
void GasPump::setZero()
{
	gas=0;
	fee=0;
}
void GasPump::begin()
{
	double total;
	cout<<"please enter the number of gas you want: ";
	cin>>total;
	while((!full())&&gas<total)
	{
		gas=gas+1;
		fee=fee+per;
	}
}
bool GasPump::full()
{
	return true;
}
//这题不太会弄
