/*
 Program: Area of Circle
 Description: Reads radius and prints the area using PI = 3.14159
*/

#include <stdio.h>

int main(void)
{
    /* Hardcoded radius example (no runtime input). */
    const double PI = 3.141592653589793;
    double r = 3.5; /* change this value as needed */
    double area = PI * r * r;
    printf("Area of circle with radius %.6g is %.6g\n", r, area);
    return 0;
}