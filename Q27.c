#include <stdio.h>

int main() {
    int n, sum = 0, first_odd = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int count = 0;
    while (count < n) {
        sum += first_odd;
        first_odd += 2;
        count++;
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);
    return 0;
}