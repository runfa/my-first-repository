/*��дһ����ΪGasPump���࣬���ཫ����ģ����������վ���ͱá��ھ����д����֮ǰ�����ŴӼ���վ�ĽǶȿ�����������
�ͱõ���Ϊ��
�������һЩ���ܵ���Ϊ�����Ը�������������صķ������������Ķ�����ʵ����Щ��Ϊ��
a ��ʾ�ܵļ�����
b ��ʾ�ܵļ�������Ӧ�ķ���
c ��ʾ��λ�����ķ���
d ���´μ���֮ǰ���ͱ�Ӧ�ý��ܵļ��������ܵķ�������
e ����һ����ʼ������������������ܵļ��������ܵķ���Ӧͬʱ�仯��ֱ�����ͽ�����
f��ĳЩ����£���Ҫ���ͱ�ֹͣ����
���������Ϊ����ΪGasPump�ĳ�Ա��������������Щ��Ա������ʵ�ִ��롣
���⣬����Gaspump��Ҫ����Ķ��û�����Ȩ���ʵ����ݣ�����Щ��������Ϊ˽�б�����
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
//���ⲻ̫��Ū
