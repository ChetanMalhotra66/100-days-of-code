//Write a program to calculate the factorial of a number.
#include<stdio.h>
void main()
{
    int n,f=1;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=n;i>0;i--)
        f*=i;
    printf("factorial: %d",f);
}