#include <stdio.h>

int main() {
    char s[1000];
    int i;

    printf("Enter a word: ");
    scanf("%s", s);

    printf("Characters one per line:\n");
    for(i = 0; s[i] != '\0'; i++)
        printf("%c\n", s[i]);
}
