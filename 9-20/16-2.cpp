#include<iostream>
using std::cout;
using std::endl;

template <class T>
void sort(T a[],int numberUsed);

template<class T>
void swapValues(T& variable1, T& variable2);

template<class T>
int indexOfSmallest(const T a[],int startIndex,int numberUsed);

#include "sort.cpp"

int main()
{
	int i;
	int a[10]={9,8,7,6,5,1,2,3,0,4};
	cout<<"Unsorsed integers:\n";


