/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/

#include<stdio.h>
void main()
{
    int n,f=0;
    printf("Enter number of late days: ");
    scanf("%d",&n);

    if(n>30)
        printf("Membership Cancelled.");
    else
    {
        if(n>10)
            f+=((n-10)*6)+30;
        else if(n<=10 && n>5)
            f+=((n-5)*4)+10;
        else
            f+=n*2;
        
        printf("Late fees: %d",f);
    }

}