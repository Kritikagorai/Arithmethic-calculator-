#include<stdio.h>
int main()
{
    double a,b;
    char ch;
    printf("Enter your first digit:- ");
    scanf("%lf", &a);
    printf("Enter an operator(+,-,*,/):- \n");
    scanf(" %c", &ch);
    printf("Enter your second digit:- ");
    scanf("%lf", &b);
    switch (ch)
    {
        case '+':
        printf("Sum is:- %.2lf",a+b);
        break;
        case '-':
        printf("Substraction is:- %.2lf",a-b);
        break;
        case '*':
        printf("Product is is:- %.2lf",a*b);
        break;
        case '/':
        if(b!=0)
        printf("Dividend is:- %.2lf",a/b);
        break;
        default:
        printf("Error, Operator not found\n");
}
return 0;
}