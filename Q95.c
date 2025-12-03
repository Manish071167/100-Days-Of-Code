#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    int len1 = 0, len2 = 0;
    int i, j, k, match, isRotation = 0;

    printf("Enter first string: ");
    scanf("%[^\n]s", s1);

    printf("Enter second string: ");
    scanf(" %[^\n]s", s2);

    while (s1[len1] != '\0') {
        len1++;
    }
    while (s2[len2] != '\0') {
        len2++;
    }

    if (len1 != len2) {
        printf("Second string is not a rotation of first\n");
        return 0;
    }

    for (i = 0; i < len1; i++) {
        match = 1;
        for (j = 0; j < len1; j++) {
            k = (i + j) % len1;
            if (s1[k] != s2[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            isRotation = 1;
            break;
        }
    }

    if (isRotation) {
        printf("Second string is a rotation of first\n");
    } else {
        printf("Second string is not a rotation of first\n");
    }

    return 0;
}
