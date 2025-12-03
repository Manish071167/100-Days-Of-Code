#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[1000];

    printf("Enter file name to open: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Unable to open file\n");
        return 0;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
