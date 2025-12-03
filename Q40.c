#include <stdio.h>

int main() {
    int n;
    int result = 0;
    int place = 1;
    printf("Enter a binary number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0001\n");  
        return 0;
    }

    while (n > 0) {
        int bit = n % 10; 
        if (bit == 0)
            result += place; 
        place *= 10;
        n /= 10;
    }

    printf("%04d\n", result);
    return 0;
}
