#include <stdio.h>

int main() {
    int n, i, x;
    int index = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (a[i] >= x) {
            index = i;
            break;
        }
    }

    printf("Index of ceil: %d\n", index);

    return 0;
}
