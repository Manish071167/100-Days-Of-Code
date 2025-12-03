#include <stdio.h>

int main() {
    int n, i;
    int xorAll = 0, xorArr = 0;

    printf("Enter n (array size): ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements between 0 and %d (one missing): ", n, n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i <= n; i++) {
        xorAll ^= i;
    }

    for (i = 0; i < n; i++) {
        xorArr ^= a[i];
    }

    printf("Missing number: %d\n", xorAll ^ xorArr);

    return 0;
}
