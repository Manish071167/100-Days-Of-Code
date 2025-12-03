#include <stdio.h>

int main() {
    int n, i, x, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n+1];

    printf("Enter elements in sorted order:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to insert: ");
    scanf("%d", &x);

    pos = n - 1;
    while(pos >= 0 && a[pos] > x) {
        a[pos + 1] = a[pos];
        pos--;
    }

    a[pos + 1] = x;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
