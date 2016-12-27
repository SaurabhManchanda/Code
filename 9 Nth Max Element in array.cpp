//Nth Max Element in array
#include<iostream>
using namespace std;
int nmax(int a[],int n,int s)
{
	int i,j,temp;
	for(i=0;i<=s-1;i++)
	{
		for(j=0;j<=s-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	return a[s-n+1];
}
int main()
{
	int a[6]={2,6,8,5,0,3},n,result;
	cout<<"Array :";
	for(int i=0;i<6;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	cout<<"Enter Position : ";
    cin>>n;
	result=nmax(a,n,6);
	cout<<n<<" Highest Number is "<<result;
}
