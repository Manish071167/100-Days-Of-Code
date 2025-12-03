#include <stdio.h>

int main() {
    int m, n, i, j, k;

    printf("Enter size of first sorted array: ");
    scanf("%d", &m);

    int a[m];

    printf("Enter %d sorted elements for first array: ", m);
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second sorted array: ");
    scanf("%d", &n);

    int b[n];

    printf("Enter %d sorted elements for second array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    int c[m + n];
    i = 0;
    j = 0;
    k = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while (i < m) {
        c[k++] = a[i++];
    }

    while (j < n) {
        c[k++] = b[j++];
    }

    printf("Merged array: ");
    for (i = 0; i < m + n; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
