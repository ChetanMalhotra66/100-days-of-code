//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>=0)
    {
        if(n==0)
            printf("The number is zero");
        else
            printf("%d is positive",n);
    }
    else
        printf("%d is negative",n);
}