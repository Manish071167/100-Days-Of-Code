#include <stdio.h>

int main() {
    char s[1000];
    int i, left = 0, right = 0;
    int lastIndex[256];
    int maxLen = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", s);

    for (i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    while (s[right] != '\0') {
        unsigned char c = s[right];

        if (lastIndex[c] >= left) {
            left = lastIndex[c] + 1;
        }

        lastIndex[c] = right;

        if (right - left + 1 > maxLen) {
            maxLen = right - left + 1;
        }

        right++;
    }

    printf("Length of longest substring: %d\n", maxLen);

    return 0;
}
