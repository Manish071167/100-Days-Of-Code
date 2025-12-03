#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    int characters = 0, words = 0, lines = 0;
    int ch, prev = ' ';

    printf("Enter file name to read: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Unable to open file\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (ch != ' ' && ch != '\t' && ch != '\n' && prev == ' ') {
            words++;
        }

        if (ch == ' ' || ch == '\t' || ch == '\n') {
            prev = ' ';
        } else {
            prev = ch;
        }
    }

    if (characters > 0 && lines == 0) {
        lines = 1;
    }

    printf("Total characters = %d\n", characters);
    printf("Total words = %d\n", words);
    printf("Total lines = %d\n", lines);

    fclose(fp);

    return 0;
}
