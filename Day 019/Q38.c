//Write a program to find the sum of digits of a number.
#include <stdio.h>
int SOD(int x)
{
    int s=0;
    while(x!=0)
    {
        s+=x%10;
        x/=10;
    }
    return s;
}

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("SUM OF DIGITS: %d",SOD(n));
}