//Reverse a number using Recursion
#include<iostream>
using namespace std;
int Reverse(int Num,int Sum)
{
	int Rem;
if(Num)
	{
		Rem=Num%10;
		Sum=Sum*10+Rem;
		Reverse(Num/10,Sum);
	}
	else
	{
	 return Sum;
}
}

int main()
{
	int N,Result;
	cout<<"Enter Number : ";
	cin>>N;
	Result=Reverse(N,0);
	cout<<"Reverse : "<<Result;
}
