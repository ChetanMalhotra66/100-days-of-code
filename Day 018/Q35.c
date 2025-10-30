//Write a program to print all factors of a given number.
#include<stdio.h>
void main()
{
    int n,f=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            printf("%d ",i);
    }
}