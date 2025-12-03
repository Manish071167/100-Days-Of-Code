#include <stdio.h>

int main() {
    char s[1000];
    int i, count = 0;

    printf("Enter a word: ");
    scanf("%s", s);

    for(i=0; s[i] != '\0'; i++)
        count++;

    printf("Total characters = %d", count);
}
