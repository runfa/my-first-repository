/*�㾭Ӫ�˼��ҷֲ��ڳ�����ͬ�ط����ȹ��㡣����һ����ΪHotDogStand���࣬�������һ����Ա����������¼�ȹ����ID��
���⻹����һ����Ա����������¼�ȹ��굱ǰ�������ȹ�������Ϊ���ഴ��һ�����캯��������ʼ����������Ա������
�ٶ���һ����ΪJustSold�ĳ�Ա������ÿ������һ���ȹ���ʱ�򶼵��øú���һ�Σ����ӵ�ǰ�������ȹ�������
������һ����Ա���������ص�ǰ�������ȹ���������
�������һ����̬��Ա���������������ȹ����۳����ȹ���������дһ����̬��Ա���������ظ�
��̬��Ա������ֵ����дһ�����򣬲������������ȹ����HotDogStand���в��ԡ�*/
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