/*Write a program to calculate the area of a circle using the constant
value of π (3.14159). The user should input the radius.*/

#include <stdio.h>
#define pie 3.14159

int main()
{
    float r;
    printf("Enter the radius of the Circle: ");
    scanf("%f", &r);

    printf("Area of the Circle with radius %.2f is %.2f.", r, pie * r * r);
    return 0;
}