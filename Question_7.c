/*Write a program to calculate the factorial of a number using a while
loop.*/

#include <stdio.h>

int main()
{
    int n, value = 1, i = 1;
    printf("Enter the number for which you want factorial: ");
    scanf("%d", &n);

    while (i <= n)
    {
        value *= i;
        i++;
    }
    printf("The factorial of the given number %d is %d.\n", n, value);
    return 0;
}