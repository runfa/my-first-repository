//编程练习
/*point是一个相当简单的数据类型，定义在标准模板库中的pair命名空间下，该练习并不需要了解任何关于标准模板库的知识。编写
一个point类，用来记录和操作平面上的点。需要声明和定义的成员函数如下：
a 一个名为set的成员函数，在该类的对象创建完成之后，该函数可以对对象的私有数据成员赋值
b 一个移动点的成员函数。该函数有两个参数：第一个代表参数水平方向的位移，第二个代表垂直方向的位移。
c 用于将点绕原点旋转90度的成员函数
d 两个常数成员函数，用来获取当前的坐标值。
为这些成员函数添加适当的注释，编写相关的程序对该类进行测试。让用户输入几个点，产生相关的对象，并练习各个
成员函数的用法。*/
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