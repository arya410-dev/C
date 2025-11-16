/*
 Program: Fibonacci series
 Description: Prints first N terms of the Fibonacci series.
*/

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid number.\n");
        return 1;
    }

    long long a = 0, b = 1;
    for (int i = 1; i <= n; i++)
    {
        printf("%lld", a);
        if (i < n)
            printf(" ");
        long long next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
