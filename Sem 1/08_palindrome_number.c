/*
 Program: Palindrome number check
 Description: Checks whether an entered integer is a palindrome.
*/

#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    int original = num;
    int reversed = 0;
    int sign = (num < 0) ? -1 : 1;
    if (num < 0)
        num = -num;

    while (num != 0)
    {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }

    reversed *= sign;

    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}