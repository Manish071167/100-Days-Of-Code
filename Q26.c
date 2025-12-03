#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    printf("Numbers from 1 to %d are: ", n);
    for (i = 1; i <= n; ++i)
    {
        printf("%d ", i);
    }
    return 0;
}