#include <stdio.h>

int main() {
    int n, i;
    int currentSum, maxSum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    currentSum = a[0];
    maxSum = a[0];

    for (i = 1; i < n; i++) {
        if (currentSum + a[i] > a[i]) {
            currentSum = currentSum + a[i];
        } else {
            currentSum = a[i];
        }
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("Maximum sum: %d\n", maxSum);

    return 0;
}
