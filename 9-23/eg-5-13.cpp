//�ж�һ�������Ƿ���������bool����
//��ôŪ����ԭ����ʲô
#include<cmath>
#include<iostream>
using namespace std;
bool isPrime(int n)
{
	float sqrtn=sqrt(n);
	if(n<2)return false;
	if(n<4)return true;
	if(n%2==0)return false;
	for (int d=3;d<sqrtn;d+=2)
		if (n%d==0)return false;
	return true;
}