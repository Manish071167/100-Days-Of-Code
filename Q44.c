#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        float term_val;
        if (i == 1) {
            term_val = 1.0;
        } else {
            term_val = (float)(2*i - 1) / (2*i);
        }
        sum += term_val;
    }

    printf("Sum of the series up to %d terms: %f\n", n, sum);

    return 0;
}