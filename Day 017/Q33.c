//Write a program to check if a number is an Armstrong number.
#include<stdio.h>
#include<math.h>
int digits(int x)
{
    int d=0;
    while(x!=0)
    {
        d++;
        x/=10;
    }
    return d;
}
void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int x=n,d=digits(n);
    float s=0;
    while(x!=0)
    {
        s+=pow((x%10),d);
        x/=10;
    }
    if(s==n)
        printf("ARMSTRONG");
    else
        printf("NOT ARMSTRONG");
}