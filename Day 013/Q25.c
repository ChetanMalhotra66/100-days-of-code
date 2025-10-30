/*Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/

#include<stdio.h>
void main()
{
    int n1,n2;
    char op;
    printf("Enter Numbers and operation: ");
    scanf("%d %d %c",&n1,&n2,&op);

    switch (op)
    {
    case '+':
        printf("%d",(n1+n2));
        break;
    case '-':
        printf("%d",(n1-n2));
        break;
    case '*':
        printf("%d",(n1*n2));
        break;
    case '/':
        printf("%d",(n1/n2));
        break;
    case '%':
        printf("%d",(n1%n2));
        break;
    default:
        printf("Invalide operator");
        break;
    }
    
}