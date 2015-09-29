#include<iostream>
using std::cin;
using std::cout;

int main()
{
	int donuts,milk;
	double dpg;
	cout<<"enter number of dounts:\n";
	cin>>donuts;
	cout<<"enter number of galss of milk:\n";
	cin>>milk;

	if (milk<=0)
	{
		cout<<donuts<<" dounts,and no milk!\n";
		cout<<"go buy some milk.\n";
	}
	else
	{
		dpg =donuts/static_cast<double>(milk);
		cout<<donuts<<" donuts.\n"
			<<"you have "<<dpg<<" donuts for each glass of milk.\n";
	}
	cout<<"end of program.\n";
	cin.get();
	cin.get();
	return 0;
}