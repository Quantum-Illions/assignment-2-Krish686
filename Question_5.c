/*Write a program that takes the user’s marks as input. If the marks are
40 or above, print "Pass", otherwise print "Fail."
*/

#include <stdio.h>

int main()
{
    int marks;
    printf("Enter you marks: ");
    scanf("%d", &marks);

    switch (marks)
    {
    case 0 ... 39:
        printf("Fail\n");
        break;
    case 40 ... 100:
        printf("Pass\n");
        break;
    default:
        printf("Invalid Marks! Enter your marks between 0 and 100.");
    }

    return 0;
}