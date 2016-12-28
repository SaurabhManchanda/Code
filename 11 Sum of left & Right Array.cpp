//Sum of left & Right Array
//5 7 8 9 1 10 1 2 -> 7 7 8 9 1 10 1 7 ->7 8 8 9 1 10 8 7 -> 7 8 18 9 1 18 8 7 ->7 8 18 10 10 18 8 7
#include<iostream>
using namespace std;
void SumLeftRight(int Array[],int N)
{
	int L=N-1;
	int R=0;
for(int i=0;i<N/2;i++)
{
	R=0;
	R=Array[i]+Array[L];
	Array[i]=R;
	Array[L]=R;
	L--;
}	
}
int main()
{
	int Array[]={5,7,8,9,1,10,1,2};
	SumLeftRight(Array,8);
	cout<<"Result : ";
	for(int j=0;j<8;j++)
	{
		cout<<Array[j]<<" ";
	}
}
