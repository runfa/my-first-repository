#include<iostream>
using namespace std;
int main()
{
	cout<<"please enter a integer namuber as n\n";
	int n;
	cin>>n;
	cout<<"n-1=:\n";
	cout<<n-1<<endl;
	cout<<n--<<endl;
	cout<<--n<<endl;
	cout<<(n-=1)<<endl;
	cin.get();
	cin.get();
	return 0;
}
