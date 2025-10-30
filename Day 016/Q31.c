//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
void main()
{
    int n,b=0,k=1;
    printf("Enter n: ");
    scanf("%d",&n);
    while(n!=0)
    {
        b+=(n%2)*k;
        k*=10;
        n/=2;
    }
    printf("binary: %d",b);    
}