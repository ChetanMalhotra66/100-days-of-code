//Write a program to find the product of odd digits of a number.
#include<stdio.h>
void main()
{
    int n,p=1;
    printf("Enter n: ");
    scanf("%d",&n);
    while(n!=0)
    {
        if((n%10)%2!=0)
            p*=n%10;
        n/=10;
    }
    printf("Product of odd digits: %d",p);
}