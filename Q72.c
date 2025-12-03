#include <stdio.h>

int main() {
int r, c, i, j, sum=0;
printf("Enter number of rows: ");
scanf("%d", &r);
printf("Enter number of columns: ");
scanf("%d", &c);
int a[r][c];
printf("Enter elements of the matrix:\n");
for(i=0;i<r;i++)
for(j=0;j<c;j++) {
printf("Element[%d][%d]: ", i, j);
scanf("%d", &a[i][j]);
sum += a[i][j];
}
printf("Sum of all elements = %d\n", sum);
return 0;
}
