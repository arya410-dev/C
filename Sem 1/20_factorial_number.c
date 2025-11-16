/*
 Program: Factorial of a given number
 Description: Computes factorial using iterative approach (for non-negative integers).
*/

#include <stdio.h>

int main(void)
{
    /* Hardcoded example (no user input). */
    int n = 6; /* compute 6! */

    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    printf("Factorial of %d is %llu\n", n, fact);
    return 0;
}
