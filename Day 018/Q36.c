//Write a program to find the HCF (GCD) of two numbers.
#include<stdio.h>

void main()
{
    int n1,n2,hcf=1;
    printf("Enter n1 and n2: ");
    scanf("%d %d",&n1,&n2);
    for(int i=2;i<n1 && i<n2;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf*=i;
            n1/=i;
            n2/=i;
        }
    }
    printf("HCF: %d",hcf);
}