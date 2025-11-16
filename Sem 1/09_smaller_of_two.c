/*
 Program: Smaller of two values
 Description: Reads two integers and prints which is smaller (or if equal).
*/

#include <stdio.h>

int main(void)
{
    /* Hardcoded values (no user input). */
    int a = 10;
    int b = 20;

    if (a < b)
        printf("%d is smaller than %d\n", a, b);
    else if (b < a)
        printf("%d is smaller than %d\n", b, a);
    else
        printf("%d and %d are equal\n", a, b);

    return 0;
}