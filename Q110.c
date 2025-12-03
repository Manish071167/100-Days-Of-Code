#include <stdio.h>

int main() {
    int n, k, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter window size k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("\n");
        return 0;
    }

    for (i = 0; i <= n - k; i++) {
        int max = a[i];
        for (j = 1; j < k; j++) {
            if (a[i + j] > max) {
                max = a[i + j];
            }
        }
        if (i == n - k) {
            printf("%d", max);
        } else {
            printf("%d ", max);
        }
    }

    printf("\n");
    return 0;
}
