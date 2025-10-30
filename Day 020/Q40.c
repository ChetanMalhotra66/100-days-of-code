//Write a program to find the 1’s complement of a binary number and print it.
#include<stdio.h>
void main()
{
    int n, digits = 0, temp, pow10;
    printf("Enter n: ");
    scanf("%d", &n);

    temp = n;
    while(temp != 0)
    {
        digits++;
        temp /= 10;
    }

    printf("One's Complement: ");
    for(int i = digits - 1; i >= 0; i--)
    {
        pow10 = 1;
        for(int j = 0; j < i; j++)
            pow10 *= 10;
        int digit = (n / pow10) % 10;
        if(digit == 0)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}