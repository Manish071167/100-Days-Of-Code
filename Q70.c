#include <stdio.h>

int main() {
    int n, i, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter value of k: ");
    scanf("%d", &k);

    k = k % n;

    for(i = 0; i < k; i++) {
        int last = a[n - 1];
        int j;
        for(j = n - 1; j > 0; j--)
            a[j] = a[j - 1];
        a[0] = last;
    }

    printf("Array after rotation:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
