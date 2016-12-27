//Second Max element in array
#include<iostream>
using namespace std;
int SecondMax(int a[])
{
	int Max,SecMax;
	Max=a[0],SecMax=a[1];
	for(int i=2;i<=4;i++)
	{
		if(a[i]>Max)
		{
			SecMax=Max;
			Max=a[i];
		}
		else if(a[i]>SecMax)
		{
			SecMax=a[i];
		}
	}
	return SecMax;
}
int main()
{
	int a[]={1,5,8,3,7},Result;
	cout<<"Array : ";
	for(int i=0;i<5;i++)
	cout<<a[i]<<" ";
	Result=SecondMax(a);
	cout<<endl;
	cout<<"Second Max Element : ";
	cout<<Result;
}
