/*你经营了几家分布在城区不同地方的热狗点。定义一个名为HotDogStand的类，该类包含一个成员变量用来记录热狗店的ID，
此外还包含一个成员变量用来记录热狗店当前卖出的热狗数量。为该类创建一个构造函数，来初始化这两个成员变量。
再定义一个名为JustSold的成员函数，每次卖掉一个热狗的时候都调用该函数一次，增加当前卖掉的热狗数量。
再增加一个成员函数，返回当前卖掉的热狗的数量。
最后，增加一个静态成员变量来跟踪所有热狗店售出的热狗数，并编写一个静态成员函数来返回该
静态成员变量的值。编写一个程序，采用至少三个热狗店对HotDogStand进行测试。*/
#include<iostream>
using namespace std;
class HotDogStand
{
public:
	HotDogStand(int aid,int asum);
	HotDogStand();
	void JustSold();
	int getSold();
	static int getAll();
private:
	int id;
	int sum;
	static int all;
};
int HotDogStand::all=0;
int main()
{
	HotDogStand A(1,10),B(2,20),C(3,30),D(4,40);
	cout<<"A:  sell number "<<A.getSold()<<endl;
	cout<<"B:  sell number "<<B.getSold()<<endl;
	cout<<"C:  sell number "<<C.getSold()<<endl;
	cout<<"D:  sell number "<<D.getSold()<<endl;
	A.JustSold();B.JustSold();
	cout<<"just sold A:  sell number "<<A.getSold()<<endl;
	cout<<"just sold B:  sell number "<<B.getSold()<<endl;
	cout<<"all="<<HotDogStand::getAll()<<endl;
	cin.get();
	return 0;
}
HotDogStand::HotDogStand(int aid,int asum)
	:id(aid),sum(asum)
{
	all=all+asum;
}
HotDogStand::HotDogStand():id(1),sum(0)
{}
void HotDogStand::JustSold()
{
	++sum;
	++all;
}
int HotDogStand::getSold()
{
	return sum;
}
int HotDogStand::getAll()
{
	return all;
}