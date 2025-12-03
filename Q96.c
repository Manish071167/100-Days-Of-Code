#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, start = 0, j;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            for (j = i - 1; j >= start; j--) {
                printf("%c", str[j]);
            }
            if (str[i] == ' ') {
                printf(" ");
                start = i + 1;
            } else {
                break;
            }
        }
        i++;
    }

    printf("\n");
    return 0;
}
