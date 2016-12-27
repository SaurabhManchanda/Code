//0s at left 1s at right in array
#include<iostream>
using namespace std;
void lr(int a[],int s)
{
	int i,count=0,j,k;
	for(i=0;i<=s;i++)
	{
		if(a[i]==0)
		{
			count++;
		}
	 } 
	 for(j=0;j<count;j++)
	 {
	 	a[j]=0;
	 }
	 for(k=count+1;k<=s;k++)
	 {
	 	a[k]=1;
	 }
	 
}
int main()
{
	int a[]={0,1,0,1,0,1,1},s;
	s=6;
	lr(a,s);
	for(int i=0;i<=s;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
