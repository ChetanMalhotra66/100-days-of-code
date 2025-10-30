//Write a program to find the LCM of two numbers.
#include<stdio.h>

void main()
{
    int n1,n2,lcm=1,i=2;
    printf("Enter n1 and n2: ");
    scanf("%d %d",&n1,&n2);
    while(n1!=1 || n2!=1)
    {
        if(n1%i==0 && n2%i==0)
        {
            lcm*=i;
            n1/=i;
            n2/=i;
        }
        else if(n1%i==0)
        {
            lcm*=i;
            n1/=i;
        }
        else if(n2%i==0)
        {
            lcm*=i;
            n2/=i;
        }
        else
            i++;
    }
    printf("LCM: %d",lcm);
}