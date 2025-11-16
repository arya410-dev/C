/*
 Program: Factorial of a given number
 Description: Computes factorial using iterative approach (for non-negative integers).
*/

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    printf("Factorial of %d is %llu\n", n, fact);
    return 0;
}
