#include <stdio.h>

int main() {
    int n, i;
    long long sum = 0, expectedSum;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements (one element repeats): ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    expectedSum = (long long)(n - 1) * (n - 2) / 2;

    printf("Repeated element: %lld\n", sum - expectedSum);

    return 0;
}
