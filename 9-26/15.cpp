//д�����������º�������������ɾ��һ��Ԫ��
//void removeFirst(double a[],int& n,double x)
//�ú����������ǰn��Ԫ���в���x������ҵ�����ɾ��
//�ҵ��ĵ�һ��x����λ�ú������Ԫ��������ǰ�ƶ�һλ��n-1����
//����true��ʾɾ���ɹ������δ�ҵ�x�������鲻�䣬������false
#include<iostream>
using namespace std;
bool removeFirst(double a[],int& n,double x);
int main()
{
	double a[]={1,2,3,4,5,6,7,8,9,10};
	int n=6;
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	bool c;
	c=removeFirst(a,n,5);
	cout<<"c= "<<c<<endl;
	cin.get();
	return 0;
	/*bool d=4;
	cout<<d;
	cin.get();*/
}
bool removeFirst(double a[],int& n,double x)
{
	int b;
	for(int i=0;i<n;i++)
	{
		/*if(x!=a[i])
			return false;
	    else
		{
			b=i;
			for(int j=b;j<10;j++)
				a[j]=a[j+1];
			n=n-1;
			return true;
		}
	}*/
		
		if(x==a[i])
		{
			b=i;
		for(int j=b;j<10;j++)
			a[j]=a[j+1];
		n=n-1;
		for(int i=0;i<9;i++)
		cout<<a[i]<<" ";
		cout<<endl;
		return true;
		}
	}
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return false;	
}