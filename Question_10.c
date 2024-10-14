/*Write a calculator program that takes two numbers and an operator
(+, -, *, /) from the user and performs the operation using switchcase.*/

#include <stdio.h>

int main()
{
    float x, y;
    char operator;
    printf("Enter your number 1 : ");
    scanf("%f", &x);

    printf("Enter your number 2 : ");
    scanf("%f", &y);

    printf("Enter your operator (+,-,*,/) : ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        printf("The Additon of the given number %.2f and %.2f is %.2f", x, y, x + y);
        break;
    case '-':
        printf("The Subraction of the given number %.2f and %.2f is %.2f", x, y, x - y);
        break;
    case '*':
        printf("The Multiplication of the given number %.2f and %.2f is %.2f", x, y, x * y);
        break;
    case '/':
        if (y == 0)
        {
            printf("The second number cannot be zero for Division.");
        }
        else
        {
            printf("The Division of the given number %.2f and %.2f is %.2f", x, y, x / y);
        }
        break;
    default:
        printf("You Entered Invalid Operator .");
        break;
    }

    return 0;
}