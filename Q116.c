#include <stdio.h>

int main() {
    int n, i, j, target;
    int iAns = -1, jAns = -1;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d positive elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter target value: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] + a[j] == target) {
                iAns = i;
                jAns = j;
                break;
            }
        }
        if (iAns != -1) {
            break;
        }
    }

    printf("%d %d\n", iAns, jAns);

    return 0;
}
