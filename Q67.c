#include <stdio.h>

int main() {
    int n, i, x, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n+1];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position to insert (0-based index): ");
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &x);

    for(i = n - 1; i >= pos; i--)
        a[i + 1] = a[i];

    a[pos] = x;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
