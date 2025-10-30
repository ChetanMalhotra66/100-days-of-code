//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
void main()
{
    float cp,sp;
    printf("Enter CP: ");
    scanf("%d",&cp);
    printf("Enter SP: ");
    scanf("%d",&sp);

    float x;
    if(sp>cp)
    {
        x=((sp-cp)/cp)*100;
        printf("Profit percentage: %.2f",x);
    }
    else if(cp>sp)
    {
        x=((cp-sp)/cp)*100;
        printf("Loss percentage: %.2f",x);
    }
    else
        printf("No profit, no loss");
}