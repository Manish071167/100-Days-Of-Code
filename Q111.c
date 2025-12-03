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
        int firstNeg = 0;
        for (j = 0; j < k; j++) {
            if (a[i + j] < 0) {
                firstNeg = a[i + j];
                break;
            }
        }
        if (firstNeg == 0) {
            printf("0");
        } else {
            printf("%d", firstNeg);
        }

        if (i != n - k) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}
