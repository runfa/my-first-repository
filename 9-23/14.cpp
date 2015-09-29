//输入一个整数n，计算1+2+3+……+n的和,限用while语句
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
	int n;
	int i=1;
	int sum=0;
	char ans;
	do
	{
	cout<<"please enter n:\n";
	cin>>n;
	
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	cout<<"sum= "<<sum<<endl;
	cout<<"again?(y/n)\n";
	cin>>ans;
	}while(ans!='n'&&ans!='N');

	cin.get();
	return 0;
}

