//Sum Of Digits Using Recursion
#include<iostream>
using namespace std;

int Sum(int Num)
{
	if(Num<=9)
	{
		return (Num);
	}
	else
	{
		return(Num%10+Sum(Num/10));
	}
}
int main()
{
	int a,Result;
	cout<<"Enter Number : ";
	cin>>a;
	Result=Sum(a);
	cout<<"Sum : "<<Result;
}

