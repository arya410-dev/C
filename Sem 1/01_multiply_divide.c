/*
 Program: Multiply and divide of 4 numbers
 Description: Reads four integers and prints their product.
              Also performs two division examples: (a/b) and (c/d).
*/

#include <stdio.h>

int main(void)
{
    /* Hardcoded example values (no runtime input). Modify these as needed. */
    long a = 8;
    long b = 4;
    long c = 2;
    long d = 1;

    long long product = (long long)a * b * c * d;
    printf("Product of %ld, %ld, %ld and %ld is %lld\n", a, b, c, d, product);

    if (b == 0 || d == 0)
    {
        printf("Cannot perform divisions: division by zero detected.\n");
    }
    else
    {
        double div1 = (double)a / b;
        double div2 = (double)c / d;
        printf("a / b = %.6g\n", div1);
        printf("c / d = %.6g\n", div2);
    }

    return 0;
}