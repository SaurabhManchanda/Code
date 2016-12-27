/*Pyramid using recursion
abcdefedcba
abcde edcba
abcd   dcba
abc     cba
ab       ba
a         a
*/
#include<stdio.h>
void Print(char Array[],int Size)
{int i;
    for(i=0;i<Size;i++)
    {
        printf("%c",Array[i]);
        printf(" ");
    }
    printf("\n");
}
void Pattern(char Array[],int Size,int P)
{
    Print(Array,Size);
    Array[(Size/2)+P]=' ';
    Array[(Size/2)-P]=' ';
    P++;
    if(Array[0]!=' ')
    {
        Pattern(Array,Size,P);
    }
}
int main()
{
    char Array[11]={'A','B','C','D','E','F','E','D','C','B','A'};
    int Size=11;
    Pattern(Array,Size,0);
}

