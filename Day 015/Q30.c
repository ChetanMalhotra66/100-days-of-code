//Write a program to reverse a given number.
#include<stdio.h>
void main()
{
    int n,r=0;
    printf("Enter n: ");
    scanf("%d",&n);

    while(n!=0)
    {
        r=(r*10)+(n%10);
        n/=10;
    }

    printf("rev: %d",r);
}