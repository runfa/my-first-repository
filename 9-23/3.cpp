
//此程序用来显示10个转义符被打印时的情况
#include<iostream>
using namespace std;
int main()
{
	cout<<'\a'<<endl<<'\b'<<endl<<'\n'<<endl<<'\r'
		<<endl<<'\t'<<endl<<'\v'<<endl<<'\''<<endl
		<<'\"'<<endl<<'\\'<<endl<<'\?'<<endl;
		cin.get();
	return 0;
}

