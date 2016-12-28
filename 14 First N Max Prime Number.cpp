//First N Max Prime Number
#include<iostream>
using namespace std;
FirstNMax(int A[],int C,int N)
{
	int B[5],Flag=0,j,k=0,i,l,Count=0,z=0;
	for(i=0;i<N;i++)
	{
		Flag=0;
		for(j=2;j<=A[i]/2;j++)
		{
			if(A[i]%j==0)
			{
				Flag=1;
			}
		}
		if(Flag==0)
		{
			B[k]=A[i];
			k++;
			Count++;
		}
	}
	z=Count;
	cout<<endl;
	cout<<"First "<<C<<" Max Prime Number : ";
	if(C>z)
	{
		for(int m=Count-1;m>0;m--)
		{
			cout<<B[m]<<" ";
		}
		cout<<endl;
		cout<<z<<" Prime Number Available";
	}
	else{
	while(C>0)
	{
		cout<<B[Count-1]<<" ";
		Count--;
		C--;
	}
}
}

int main()
{
	int A[]={1,2,3,4,5,6,7,8,9},N;
	cout<<"Enter Number : ";
	cin>>N;
	cout<<"Array : ";
	for(int i=0;i<9;i++)
	{
		cout<<A[i]<<" ";
	}
	FirstNMax(A,N,9);
}
