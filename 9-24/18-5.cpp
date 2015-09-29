//throwing an exception inside a function
#include<iostream>
#include<cstdlib>
using std::cin;
using std::cout;
using std::endl;
class DivideByZero 
{};
double safeDivide(int top,int bottom) throw(DivideByZero);

int main()
{
	int numerator;
	int denominator;
	double quotient;
	cout<<"enter numerator:\n";
	cin>>numerator;
	cout<<"enter denominator:\n";
	cin>>denominator;

	try
	{
		quotient=safeDivide(numerator,denominator);
	}
	catch(DivideByZero)
	{
		cout<<"error :division by zero\n"
			<<"program aborting \n";
		cin.get();cin.get();
		exit(0);
	}
	cout<<numerator<<"/"<<denominator<<"="<<quotient<<endl;
	cout<<"end of program\n";
	cin.get();
	cin.get();
	return 0;
}
double safeDivide(int top,int bottom)throw (DivideByZero)
{
	if (bottom==0)
		throw DivideByZero();
	return top/static_cast<double>(bottom);
}