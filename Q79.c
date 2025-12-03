#include <stdio.h>

int main() {
    int n, m, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("Enter number of columns: ");
    scanf("%d", &m);

    int a[n][m];

    printf("Enter matrix elements:\n");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d", &a[i][j]);

    printf("Diagonal elements: ");
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            if(i == j) printf("%d ", a[i][j]);
}
