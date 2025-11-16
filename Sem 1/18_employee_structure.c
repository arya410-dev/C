/*
 Program: Employee structure
 Description: Demonstrates a struct for employee and prints id, name and salary.
*/

#include <stdio.h>

struct Employee
{
    int id;
    char name[100];
    double salary;
};

int main(void)
{
    struct Employee e;
    printf("Enter employee id: ");
    if (scanf("%d", &e.id) != 1)
        return 1;
    // consume newline
    getchar();
    printf("Enter employee name: ");
    if (!fgets(e.name, sizeof(e.name), stdin))
        return 1;
    // remove trailing newline
    for (char *p = e.name; *p; ++p)
        if (*p == '\n')
        {
            *p = '\0';
            break;
        }
    printf("Enter salary: ");
    if (scanf("%lf", &e.salary) != 1)
        return 1;

    printf("\nEmployee details:\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.6g\n", e.salary);
    return 0;
}
