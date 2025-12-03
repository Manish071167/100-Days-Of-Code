#include <stdio.h>

int main() {
    int n, i;
    float num = 2.0, den = 3.0, sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        sum += num / den;
        num += 2.0;
        den += 4.0;
    }

    printf("Sum of the series is: %f\n", sum);

    return 0;
}