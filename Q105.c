#include <stdio.h>

int main() {
    int n, i, j, count, majority = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (a[j] == a[i]) {
                count++;
            }
        }
        if (count > n / 2) {
            majority = a[i];
            break;
        }
    }

    printf("Majority element: %d\n", majority);

    return 0;
}
