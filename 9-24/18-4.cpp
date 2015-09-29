//catching mulitiple exceptions 
#include <iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
class NegativeNumber
{
public:
	NegativeNumber(){}
	NegativeNumber(string theMessage):message(theMessage){}
	string getMessage()const{return message;}
private:
	string message;
};
class DivideByZero
{};

int main()
{
	int pencils,erasers;
	double ppe;
	try
	{
		cout<<"how many pencils do you have?\n";
		cin>>pencils;
		if(pencils<0)

			throw NegativeNumber("pencils");
		cout<<"how many erasers do you have?\n";
		cin>>erasers;
		if(erasers<0)
			throw NegativeNumber("erasers");
		if(erasers!=0)
			ppe=pencils/static_cast<double>(erasers);
		else
			throw DivideByZero();
		cout<<"each eraser must last through "
			<<ppe<<" pencils.\n";
	}
catch(NegativeNumber e)
{
	cout<<"cannot have a negative number of  "
		<<e.getMessage()<<endl;
}
catch(DivideByZero)
{
	cout<<"do not make any mistake.\n";
}
cout<<"end of the program.\n";
cin.get();
cin.get();
return 0;
}
