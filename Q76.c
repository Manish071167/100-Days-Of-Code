#include <stdio.h>

int main()
{
    int n, i, j, flag = 1;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] != a[j][i])
                flag = 0;
    if (flag)
        printf("Matrix is symmetric\n");
    else
        printf("Matrix is not symmetric\n");
    return 0;
}
