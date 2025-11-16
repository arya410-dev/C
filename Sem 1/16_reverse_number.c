/*
 Program: Reverse number
 Description: Reverses digits of an integer and prints the result.
*/

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1)
        return 1;

    int sign = (n < 0) ? -1 : 1;
    if (n < 0)
        n = -n;

    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    rev *= sign;
    printf("Reversed number: %d\n", rev);
    return 0;
}
