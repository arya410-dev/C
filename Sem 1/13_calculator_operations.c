/*
 Program: Calculator operations
 Description: Simple calculator to perform +, -, *, / on two numbers.
*/

#include <stdio.h>

int main(void)
{
    double a, b;
    char op;
    printf("Enter expression (e.g. 2 + 3): ");
    if (scanf("%lf %c %lf", &a, &op, &b) != 3)
    {
        printf("Invalid input.\n");
        return 1;
    }

    switch (op)
    {
    case '+':
        printf("Result: %.6g\n", a + b);
        break;
    case '-':
        printf("Result: %.6g\n", a - b);
        break;
    case '*':
        printf("Result: %.6g\n", a * b);
        break;
    case '/':
        if (b == 0)
            printf("Division by zero error.\n");
        else
            printf("Result: %.6g\n", a / b);
        break;
    default:
        printf("Unsupported operator '%c'\n", op);
    }

    return 0;
}
