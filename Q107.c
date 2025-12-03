#include <stdio.h>

int main() {
    int n, i, j, found;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        found = -1;
        for (j = i - 1; j >= 0; j--) {
            if (a[j] > a[i]) {
                found = a[j];
                break;
            }
        }
        if (i == n - 1) {
            printf("%d", found);
        } else {
            printf("%d,", found);
        }
    }

    printf("\n");
    return 0;
}
