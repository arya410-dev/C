/*
 Program: Area of Circle
 Description: Reads radius and prints the area using PI = 3.14159
*/

#include <stdio.h>

int main(void)
{
    double r;
    const double PI = 3.141592653589793;

    printf("Enter radius: ");
    if (scanf("%lf", &r) != 1 || r < 0)
    {
        printf("Invalid radius.\n");
        return 1;
    }

    double area = PI * r * r;
    printf("Area of circle with radius %.6g is %.6g\n", r, area);
    return 0;
}