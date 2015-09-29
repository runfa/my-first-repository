//写出一个类似例题5.2的程序，验证三角恒等式
//cos2x=2cosx*cosx-1
#include<iostream>
#include<cmath>
using std::cos;
using std::cin;
using std::cout;
using std::endl;
int main()
{
	for (double i=0;i<2;i=i+0.05)
		cout<<i<<"\t"<<cos(2*i)<<"\t"<<(2*cos(i)*cos(i)-1)<<endl;
	cin.get();
	return 0;
}
