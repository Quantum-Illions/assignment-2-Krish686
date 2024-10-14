/*Write a program that asks the user to enter a positive number. If they
enter a negative number, use goto to make them enter again.*/

#include <stdio.h>

int main()
{
    int number;
again:
    printf("Enter a positive number: ");
    scanf("%d", &number);

    if (number < 0 || number == 0)
    {
        goto again;
    }
    else
    {
        printf("%d is a positive number.", number);
    }

    return 0;
}