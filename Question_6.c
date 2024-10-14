/*Write a program to calculate the sum and average of 5 numbers
entered by the user using a for loop.*/

#include <stdio.h>

int main()
{
    int sum = 0, n;
    for (int i = 1; i <= 5; i++)
    {
        printf("Enter the number %d: ", i);
        scanf("%d", &n);
        sum += n;
    }

    printf("The average of the given numbers is %.2f.", (float)sum / 5);
    return 0;
}