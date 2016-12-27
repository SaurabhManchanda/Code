//Call a function in main and pass 2 variables, add them and return address of the result.
#include<iostream>
using namespace std;
int *Sum(int a,int b){
	int c;
	int *Sum;
	c=a+b;
	Sum=&c;
	return Sum;
}
int main()
{
	int a,b;
	cout<<"Enter Two Numbers : ";
	cin>>a>>b;
	int *p;
	p=Sum(a,b);
	cout<<"Sum : "<<*p;
}
