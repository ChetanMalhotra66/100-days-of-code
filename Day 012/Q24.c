/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/

#include<stdio.h>
void main()
{
    int n,b=0;
    printf("Enter number of units: ");
    scanf("%d",&n);

    if(n>300)
        b+=((n-300)*12)+2200;
    else if(n>200 && n<=300)
        b+=((n-200)*10)+1200;
    else if(n>100 && n<=200)
        b+=((n-100)*7)+500;
    else
        b+=n*5;

    printf("Bill: %d",b);
}
