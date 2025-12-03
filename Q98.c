#include <stdio.h>

int main() {
    char name[1000];
    int i, lastStart = -1;

    printf("Enter the full name: ");
    scanf("%[^\n]s", name);

    if (name[0] != ' ' && name[0] != '\0') {
        printf("%c.", name[0]);
    }

    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ') {
            lastStart = i;
        }
    }

    for (i = 1; name[i] != '\0' && i < lastStart; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ') {
            printf("%c.", name[i]);
        }
    }

    printf(" ");
    if (lastStart != -1) {
        for (i = lastStart; name[i] != '\0'; i++) {
            printf("%c", name[i]);
        }
    }

    printf("\n");
    return 0;
}
