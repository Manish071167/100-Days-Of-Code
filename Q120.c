#include <stdio.h>

int main() {
    char str[1000];
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    if (str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - 'a' + 'A';
    }

    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }

    printf("Sentence case: %s\n", str);

    return 0;
}
