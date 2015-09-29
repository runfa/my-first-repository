//第七题答案
//未完
#include<iostream>
#include<string>
using namespace std;
long comb(int n,int k);
string setw(int n);
int main()
{
	const int m=13;
	for (int i=0;i<m;i++)
	{
		for (int j=1;j<m-1;j++)
			cout<<setw(2)<<" ";

