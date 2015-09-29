#include<iostream>
using std::cin;
using std::cout;
class NoMilk
{
public:
	NoMilk(){}
	NoMilk(int howMany):count(howMany){}
	int getCount()const{return count;}
private:
	int count;
};
int main()
{
	int donuts, milk;
	double dpg;
	try
	{
		cout<<"enter number of donuts:\n";
		cin>>donuts;
		cout<<"enter number of glasses of milk:\n";
		cin>>milk;
		if (milk<=0)
			throw NoMilk(donuts);
		dpg=donuts/static_cast<double>(milk);
		cout<<donuts<<" donuts.\n"
			<<milk<<" glasses of milk.\n"
			<<"you have "<<dpg
			<<" donuts for each glass of milk.\n";
	}
	catch(NoMilk e)
	{
		cout<<e.getCount()<<" dounts,and No Milk!\n"
			<<"go buy some milk.\n";
	}
	cout<<" end of program\n";
	cin.get();
	cin.get();
	return 0;
}