//Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>
void main()
{
    int n,p=1;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=2;i<=n;i++)
    {
        if(i%2==0)
            p*=i;
    }
    printf("Product= %d",p);
}