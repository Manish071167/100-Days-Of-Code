#include <stdio.h>

int main() {
    int n, i;
    int total = 0, leftSum = 0, pivot = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        total += a[i];
    }

    for (i = 0; i < n; i++) {
        if (leftSum == total - leftSum - a[i]) {
            pivot = i;
            break;
        }
        leftSum += a[i];
    }

    printf("Pivot index: %d\n", pivot);

    return 0;
}
