/*
 Program: Area of Rectangle
 Description: Reads length and width and prints the area.
*/

#include <stdio.h>

int main(void)
{
    /* Hardcoded length and width (no user input). */
    double length = 5.0; /* example length */
    double width = 2.5;  /* example width */

    double area = length * width;
    printf("Length = %.6g, Width = %.6g\n", length, width);
    printf("Area of rectangle: %.6g\n", area);
    return 0;
}