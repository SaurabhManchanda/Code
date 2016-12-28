//Maximum Prime no in array 
#include<iostream>
using namespace std;
int Maxprime(int a[],int n)
{
	int i,j,Max,flag=0,b;
	for(i=0;i<=n;i++)
	{
		b=a[i];
		for(j=2;j<=b/2;j++)
		{
			if(a[i]/j!=0)
			{
				Max=a[i];
				if(a[i]>=Max)
				{
					Max=a[i];
				}
           }	
	   }
}
	return Max;
}
int main()
{
	int a[5]={1,2,3,55,37},result;
	result=Maxprime(a,5);
	cout<<"Maximum Prime no : "<<result;
}

