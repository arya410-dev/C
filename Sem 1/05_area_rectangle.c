/*
 Program: Area of Rectangle
 Description: Reads length and width and prints the area.
*/

#include <stdio.h>

int main(void)
{
    double length, width;
    printf("Enter length: ");
    if (scanf("%lf", &length) != 1 || length < 0)
    {
        printf("Invalid length.\n");
        return 1;
    }
    printf("Enter width: ");
    if (scanf("%lf", &width) != 1 || width < 0)
    {
        printf("Invalid width.\n");
        return 1;
    }

    double area = length * width;
    printf("Area of rectangle: %.6g\n", area);
    return 0;
}