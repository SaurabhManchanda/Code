//Negative no at left postive no at right in array
#include<iostream>
using namespace std;
void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void lr(int a[],int s)
{
	int i,j=-1;
	for(i=0;i<=s;i++)
	{
		if(a[i]<0)
		{
			j++;
			Swap(&a[j],&a[i]);
		}
	 }	 
}
int main()
{
	int a[]={-1,2,-3,-4,5,-6},s;
	s=5;
	lr(a,s);
	for(int i=0;i<=s;i++)
	{
		cout<<a[i]<<" ";
	}	
}
