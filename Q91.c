#include <stdio.h>

int main() {
    char str[1000], result[1000];
    int i, j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
        } else {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';

    printf("String without vowels: %s\n", result);

    return 0;
}
