/*Write a program to print numbers from 1 to 100 using a for loop.
Stop the loop when a number is divisible by 47 using break*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 47 == 0)
        {
            printf("The number %d is divisible by 47.\n", i);
            break;
        }

        printf("%d\n", i);
    }
    return 0;
}