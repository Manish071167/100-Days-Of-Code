#include <stdio.h>

int main() {
    char str[1000];
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'z' - 25;
        }
    }

    printf("Toggled string: %s\n", str);

    return 0;
}
