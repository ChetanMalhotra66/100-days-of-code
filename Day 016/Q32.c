//Write a program to check if a number is a palindrome.
#include<stdio.h>
int rev(int x)
{
    int r=0;
    while(x!=0)
    {
        r=(r*10)+(x%10);
        x/=10;
    }
    return r;
}
void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    if(n==rev(n))
        printf("PALINDROME");
    else
        printf("NOT PALINDROME");
}