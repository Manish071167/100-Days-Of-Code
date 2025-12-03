#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    int ch;
    int vowels = 0, consonants = 0;

    printf("Enter file name to read: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Unable to open file\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    fclose(fp);

    return 0;
}
