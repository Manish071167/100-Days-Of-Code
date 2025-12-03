#include <stdio.h>

int main() {
    int n, i, target;
    int first = -1, last = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter target value: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (a[i] == target) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }

    printf("First index: %d\n", first);
    printf("Last index: %d\n", last);

    return 0;
}
