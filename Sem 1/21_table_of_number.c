/*
 Program: Table of a number
 Description: Prints multiplication table for a given number up to 10.
*/

#include <stdio.h>

int main(void)
{
    /* Hardcoded example number (no user input). */
    int n = 7;

    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);

    return 0;
}
