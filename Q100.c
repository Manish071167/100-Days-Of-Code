#include <stdio.h>

int main() {
    char str[1000];
    int len = 0, i, j, k;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[len] != '\0') {
        len++;
    }

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
