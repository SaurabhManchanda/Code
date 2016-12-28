//First N prime no in array
#include<iostream>
using namespace std;
void FirstNPrime(int a[],int n,int s)
{
	int i,j,flag=0,c=0;
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=2;j<=a[i]/2;j++)
		{
			if(a[i]/j==0)
			{
	        flag=1;
            }
	    }
	  if(c<s)
			{ 
	   if(flag==0)
	   {
				cout<<a[i]<<" ";
				c++;
	   }
            }
    }	
}
int main()
{
	int a[5]={1,2,3,55,37},n;
	cout<<"Enter Number : ";
    cin>>n;
    cout<<"First "<<n<<" Prime Number : ";
	FirstNPrime(a,5,n);
}

