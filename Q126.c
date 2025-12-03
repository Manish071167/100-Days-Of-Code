#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    int ch;

    printf("Enter file name to open: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File cannot be opened\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
