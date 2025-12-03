#include <stdio.h>

int main()
{
    int r, c, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int a[r][c], rowSum[r];
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
        {
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    for (i = 0; i < r; i++)
    {
        rowSum[i] = 0;
        for (j = 0; j < c; j++)
            rowSum[i] += a[i][j];
    }
    for (i = 0; i < r; i++)
        printf("Sum of row %d = %d\n", i, rowSum[i]);
    return 0;
}
