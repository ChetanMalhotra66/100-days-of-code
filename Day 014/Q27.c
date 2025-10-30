//Write a program to print the sum of the first n odd numbers.

#include<stdio.h>
void main()
{
    int n,s=0;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=1;i>0;i++)
    {
        if(n==0)
            break;
        if(i%2!=0)
        {
            s+=i;
            n--;
        }        
    }
    printf("Sum= %d",s);
}