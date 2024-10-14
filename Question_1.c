/*Write a program to demonstrate the difference between local and
global variables. Use a global variable to count how many times a
function is called and a local variable for simple calculations.*/

#include <stdio.h>
int count = 0;

void increament()
{
    count++;
}

int add(int(a), int(b))
{
    int sum = a + b;
    increament();
    return sum;
}

int main()
{
    printf("The sum of 5 and 6 is %d. \n", add(5, 6));
    printf("The sum of 20 and 30 is %d. \n", add(20, 30));

    printf("The number of times funtion is called is %d", count);
}