//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
void main() 
{
    int s,m,h;
    printf("Enter time in seconds: ");
    scanf("%d",&s);
    h=s/3600;
    s=s%3600;
    m=s/60;
    s=s%60;
    printf("Time- %d:%d:%d",h,m,s);
}