//�����ϰ
/*point��һ���൱�򵥵��������ͣ������ڱ�׼ģ����е�pair�����ռ��£�����ϰ������Ҫ�˽��κι��ڱ�׼ģ����֪ʶ����д
һ��point�࣬������¼�Ͳ���ƽ���ϵĵ㡣��Ҫ�����Ͷ���ĳ�Ա�������£�
a һ����Ϊset�ĳ�Ա�������ڸ���Ķ��󴴽����֮�󣬸ú������ԶԶ����˽�����ݳ�Ա��ֵ
b һ���ƶ���ĳ�Ա�������ú�����������������һ���������ˮƽ�����λ�ƣ��ڶ�������ֱ�����λ�ơ�
c ���ڽ�����ԭ����ת90�ȵĳ�Ա����
d ����������Ա������������ȡ��ǰ������ֵ��
Ϊ��Щ��Ա��������ʵ���ע�ͣ���д��صĳ���Ը�����в��ԡ����û����뼸���㣬������صĶ��󣬲���ϰ����
��Ա�������÷���*/
#include<iostream>
using namespace std;
class Point
{
public:
	void set();
	/*void Point::setX(double newX);
	void Point::setY(double newY);*/
	void remove(double dx,double dy);
	void turn90d();
	double getX();
	double getY();
private:
	double x;
	double y;
};

int main()
{
	Point P;
	P.set();
	cout<<"(x,y)=("<<P.getX()<<","<<P.getY()<<")"<<endl;
	P.remove(1,1);
	cout<<"(x,y)=("<<P.getX()<<","<<P.getY()<<")"<<endl;
	P.turn90d();
	cout<<"(x,y)=("<<P.getX()<<","<<P.getY()<<")"<<endl;
	cin.get();
	cin.get();
	return 0;
}

void Point:: set()
{
	cout<<"please enter x:";
	cin>>x;
	cout<<"please enter y:";
	cin>>y;
}

/*void Point::setX(double newX)
{
	x=newX;
}
void Point::setY(double newY)
{
	y=newY;
}*/
void Point::remove(double dx,double dy)
{
	x+=dx;y+=dy;
}
void Point::turn90d()
{
	double temp;
	temp=-y;;
	y=x;
	x=temp;
}
double Point::getX()
{
	return x;
}
double Point::getY()
{
	return y;
}