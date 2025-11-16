/*
 Program: Multiply and divide of 4 numbers
 Description: Reads four integers and prints their product.
              Also performs two division examples: (a/b) and (c/d).
*/

#include <stdio.h>

int main(void)
{
    int a, b, c, d;

    printf("Enter four integers (a b c d): ");
    if (scanf("%d %d %d %d", &a, &b, &c, &d) != 4)
    {
        printf("Invalid input.\n");
        return 1;
    }

    long long product = (long long)a * b * c * d;
    printf("Product of %d, %d, %d and %d is %lld\n", a, b, c, d, product);

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