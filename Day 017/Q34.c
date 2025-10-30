//Write a program to check if a number is prime.
#include<stdio.h>
void main()
{
    int n,f=0;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            f++;
    }
    if(f==2)
        printf("PRIME");
    else
        printf("NOT PRIME");
}