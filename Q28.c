#include <stdio.h>

int main() {
    int n, product = 1, first_even = 2;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (first_even <= n) {
        product *= first_even;
        first_even += 2;
    }

    printf("The product of even numbers from 1 to %d is: %d\n", n, product);
    return 0;
}