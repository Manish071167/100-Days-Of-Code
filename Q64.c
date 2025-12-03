#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};
    int digit, maxFreq = 0, maxDigit = 0, i;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0)
        num = -num;

    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    for (i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring most times: %d\n", maxDigit);
    printf("It occurs %d times.\n", maxFreq);

    return 0;
}
