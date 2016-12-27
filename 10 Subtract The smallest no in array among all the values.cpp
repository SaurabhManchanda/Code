//Subtract The smallest no in array among all the values
#include<iostream>
using namespace std;

void small(int a[],int n)
{
	int min=a[0],c;
	for(int i=0;i<n;i++)
	{if(min>a[i])
	{
		min=a[i];
		c=i;
	}
	
}
	for(int j=0;j<n;j++)
	{
		a[j]=a[j]-min;
	}
	for(int k=0;k<n;k++)
	{
		cout<<a[k];
	}
	
}

int main()
{
	
	int a[]={1,2,3,4,5},b;
	b=5;
	small(a,b);
}
