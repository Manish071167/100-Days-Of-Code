#include <stdio.h>

int main() {
    char str[1000];
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("Resulting string: %s\n", str);

    return 0;
}
