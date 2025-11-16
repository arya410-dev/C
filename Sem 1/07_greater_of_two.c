/*
 Program: Greater of two values
 Description: Reads two integers and prints which is greater (or if equal).
*/

#include <stdio.h>

int main(void)
{
    /* Hardcoded values (no user input). */
    int x = 42;
    int y = 27;

    if (x > y)
        printf("%d is greater than %d\n", x, y);
    else if (y > x)
        printf("%d is greater than %d\n", y, x);
    else
        printf("%d and %d are equal\n", x, y);

    return 0;
}