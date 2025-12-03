#include <stdio.h>

int main() {
    int n, k, i, j;
    int maxSum = -1000000000;

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
        printf("Maximum sum: -1\n");
        return 0;
    }

    for (i = 0; i <= n - k; i++) {
        int sum = 0;
        for (j = 0; j < k; j++) {
            sum += a[i + j];
        }
        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("Maximum sum: %d\n", maxSum);

    return 0;
}
