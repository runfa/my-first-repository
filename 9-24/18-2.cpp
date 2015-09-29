#include<iostream>
using std::cin;
using std::cout;
using std::end;

int main()
{
	int donuts,milk;
	double dpg;

	try
	{
		cout<<"enter number of donuts:\n";
		cin>>donuts;
		cout<<"enter number of glasses of milk:\n";
		cin>>milk;

		if (milk<=0)
			throw donuts;
		dpg=donuts/static_cast<double>(milk);
		cout<<donuts<<"dounts.\n"
			<<milk<<" glass of milk.\n"
			<<"go and get some milk.\n";
	}
	catch(int e)
	{
		cout<<e <<" donuts,and no milk!\n"
			<<"go buy some milk.\n";
	}
	cout<<"end of program.\n";
	cin.get();
	cin.get();
	return 0;
}



