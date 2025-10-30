//Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
void main()
{
    int p,r,t,si;
    float ci;
    printf("Enter principal: ");
    scanf("%d",&p);
    printf("Enter rate: ");
    scanf("%d",&r);
    printf("Enter time: ");
    scanf("%d",&t);
    si=(p*r*t)/100;
    ci=p*(1+(r/100.0));
    for(int i=1;i<t;i++)
    {
        ci=ci*(1+(r/100.0));
    }
    ci=ci-p;
    printf("Simple Interest: %d\n",si);
    printf("Compound Interest: %.2f\n",ci);
}