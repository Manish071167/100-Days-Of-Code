#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[1000];

    printf("Enter file name to append: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Unable to open file\n");
        return 0;
    }

    printf("Enter a new line of text: ");
    getchar();
    fgets(line, sizeof(line), stdin);

    fputs(line, fp);

    printf("Line appended successfully\n");

    fclose(fp);

    return 0;
}
