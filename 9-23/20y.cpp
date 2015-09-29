//≤‚ ‘≥Ã–Ú
#include<iostream>
using namespace std;
int cube (int x)
{
	return x*x*x;
}
int main()
{
	int n=1;
	while(n!=0)
	{
		cin>>n;
		cout<<"\tcube("<<n<<")="<<cube(n)<<endl;
	}
	cin.get();
	return 0;
}
