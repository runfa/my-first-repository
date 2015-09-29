//ÄêÁä·Ö¶Î
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main()
{
	cout<<"please enter your age :\n";
	int age;
	cin>>age;
if(age<18)
	cout<<"you are a child\n";
else if(age>=18&&age<65)
	cout<<"you are a adult\n";
else
	cout<<"you are a senior citizen\n";
cin.get();
cin.get();
return 0;
}
