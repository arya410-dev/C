/*
 Program: Swap two numbers
 Description: Reads two numbers and swaps them (with and without temp variable).
*/

#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter two integers (a b): ");
    if (scanf("%d %d", &a, &b) != 2)
        return 1;

    printf("Before swap: a=%d, b=%d\n", a, b);

    // swap using a temporary variable
    int temp = a;
    a = b;
    b = temp;
    printf("After swap (using temp): a=%d, b=%d\n", a, b);

    // swap back using arithmetic (note: safe for integers within range)
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swap (using arithmetic): a=%d, b=%d\n", a, b);

    return 0;
}
