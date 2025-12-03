#include <stdio.h>

int main() {
    char str[1000];
    int i;

    printf("Enter a lowercase string: ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
