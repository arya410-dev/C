/*
 Program: Sum of two matrices (duplicate)
 Description: Alternate implementation — reads dimensions and sums two matrices.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int r, c;
    printf("Enter rows and columns: ");
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0)
        return 1;

    int total = r * c;
    int *A = malloc(sizeof(int) * total);
    int *B = malloc(sizeof(int) * total);
    int *S = malloc(sizeof(int) * total);
    if (!A || !B || !S)
        return 1;

    printf("Enter elements of matrix A (%dx%d) row-wise:\n", r, c);
    for (int i = 0; i < total; i++)
        scanf("%d", &A[i]);

    printf("Enter elements of matrix B (%dx%d) row-wise:\n", r, c);
    for (int i = 0; i < total; i++)
        scanf("%d", &B[i]);

    printf("Sum matrix:\n");
    for (int i = 0; i < total; i++)
    {
        S[i] = A[i] + B[i];
        printf("%d%s", S[i], (i % c) == c - 1 ? "\n" : " ");
    }

    free(A);
    free(B);
    free(S);
    return 0;
}
