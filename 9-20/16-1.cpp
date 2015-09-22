#include<iostream>
using std::cin;
using std::cout;
using std::endl;
template <class T>
void swapValues(T& variable1,T& variable2)
{
	T temp;
	temp=variable1;
	variable1=variable2;
	variable2=temp;
}

int main()
{
	int integer1=1,integer2=2;
	cout<<"original integer value are"
		<<integer1<<" "<<integer2<<endl;
	swapValues(integer1,integer2);
	cout<<"swapped integer value are"
		<<integer1<<" "<<integer2<<endl;
	char symbol1='A',symbol2='B';
	cout<<"original character value are"
		<<symbol1<<" "<<symbol2<<endl;
	swapValues(symbol2,symbol1);
	cout<<"swapped character value are"
		<<symbol1<<" "<<symbol2<<endl;
	cin.get();
	return 0;
}