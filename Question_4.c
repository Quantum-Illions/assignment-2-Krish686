/*Create an enum for days of the week and write a program that takes
a number (1-7) from the user to display the corresponding day using
switch-case.*/

#include <stdio.h>
enum Days
{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
}

main()
{
    int n;
    printf("Enter the day number you want to display between 1 and 7: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("The day is Monday for the day number %d.", n);
        break;
    case 2:
        printf("The day is Tuesday for the day number %d.", n);
        break;
    case 3:
        printf("The day is Wednesday for the day number %d.", n);
        break;
    case 4:
        printf("The day is Thursday for the day number %d.", n);
        break;
    case 5:
        printf("The day is Friday for the day number %d.", n);
        break;
    case 6:
        printf("The day is Saturday for the day number %d.", n);
        break;
    case 7:
        printf("The day is Sunday for the day number %d.", n);
        break;
    default:
        printf("Enter a valid day number between 1 and 7.");
        break;
    }

    return 0;
}