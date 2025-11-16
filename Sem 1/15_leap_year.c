/*
 Program: Leap year checker
 Description: Checks whether a given year is a leap year.
*/

#include <stdio.h>

int main(void)
{
    int year;
    printf("Enter year: ");
    if (scanf("%d", &year) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    int isLeap = 0;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        isLeap = 1;

    printf("%d is %sa leap year.\n", year, isLeap ? "" : "not ");
    return 0;
}
