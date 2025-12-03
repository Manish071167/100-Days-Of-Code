#include <stdio.h>

int main() {
    char str[1000], rev[1000];
    int i, len = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[len] != '\0') {
        len++;
    }

    for (i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';

    printf("Reversed string: %s\n", rev);

    return 0;
}
