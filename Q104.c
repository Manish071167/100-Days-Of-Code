#include <stdio.h>

int main() {
    int n;
    long long total, x, leftSum;

    printf("Enter positive integer n: ");
    scanf("%d", &n);

    total = (long long)n * (n + 1) / 2;

    x = 1;
    leftSum = 1;

    while (x <= n) {
        long long rightSum = total - (leftSum - x);
        if (leftSum == rightSum) {
            printf("Pivot integer: %lld\n", x);
            return 0;
        }
        x++;
        leftSum += x;
    }

    printf("Pivot integer: -1\n");
    return 0;
}
