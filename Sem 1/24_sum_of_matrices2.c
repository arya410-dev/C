/*
 Program: Sum of two matrices (duplicate)
 Description: Alternate implementation — reads dimensions and sums two matrices.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /* Hardcoded example matrices (no runtime input). */
    int r = 2, c = 2;
    int total = r * c;

    int A_vals[] = {1, 2, 3, 4};
    int B_vals[] = {4, 3, 2, 1};

    int *A = malloc(sizeof(int) * total);
    int *B = malloc(sizeof(int) * total);
    int *S = malloc(sizeof(int) * total);
    if (!A || !B || !S)
        return 1;

    for (int i = 0; i < total; i++) A[i] = A_vals[i];
    for (int i = 0; i < total; i++) B[i] = B_vals[i];

    printf("Matrix A:\n");
    for (int i = 0; i < total; i++)
        printf("%d%s", A[i], (i % c) == c - 1 ? "\n" : " ");

    printf("Matrix B:\n");
    for (int i = 0; i < total; i++)
        printf("%d%s", B[i], (i % c) == c - 1 ? "\n" : " ");

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
