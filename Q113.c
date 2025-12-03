#include <stdio.h>

int main() {
    int n, k, i, j, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    if (k >= 1 && k <= n) {
        printf("Kth smallest element: %d\n", a[k - 1]);
    } else {
        printf("Kth smallest element: -1\n");
    }

    return 0;
}
