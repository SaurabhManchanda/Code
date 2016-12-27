//Unique Element
#include<iostream>
using namespace std;
void Unique(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		cout<<"Enter Value : ";
		scanf("%d",&a[i]);
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				i--;
				printf("Value already Exist Enter another one\n");
				break;
			}
		}
	}
}
int main()
{
	int a[5],i;
	Unique(a,5);
	cout<<"Unique Elements :";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
}
