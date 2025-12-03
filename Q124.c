#include <stdio.h>

int main() {
    FILE *src, *dest;
    char srcName[100], destName[100];
    int ch;

    printf("Enter source file name: ");
    scanf("%s", srcName);

    printf("Enter destination file name: ");
    scanf("%s", destName);

    src = fopen(srcName, "r");
    if (src == NULL) {
        printf("Unable to open source file\n");
        return 0;
    }

    dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Unable to open destination file\n");
        fclose(src);
        return 0;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully\n");

    fclose(src);
    fclose(dest);

    return 0;
}
