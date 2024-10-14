// /*Create a program where the user enters two numbers (one integer
// and one decimal). Swap their types using type casting and print the
// new values.*/

#include <stdio.h>

int main()
{
    int x;
    double y;
    printf("Enter an integer number: ");
    scanf("%d", &x);
    printf("Enter an decimal number: ");
    scanf("%lf", &y);

    printf("The integer into decimal number is: %.2lf\n", (double)x);
    printf("The decimal into integer number is: %d\n", (int)y);

    return 0;
}
