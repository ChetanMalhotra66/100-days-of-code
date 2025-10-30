//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
#include <stdio.h>
void main() 
{
    int p;
    char g;
    printf("Enter percentage: ");
    scanf("%d", &p);
    if (p >= 90 && p <= 100)
        g = 'A';
    else if (p >= 80 && p < 90)
        g = 'B';
    else if (p >= 70 && p < 80)
        g = 'C';
    else if (p >= 60 && p < 70)
        g = 'D';
    else if (p >= 0 && p < 60)
        g = 'F';
    else {
        printf("Invalid percentage\n");
        return;
    }
    printf("Grade: %c\n", g);

}