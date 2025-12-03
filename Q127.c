#include <stdio.h>

int main() {
    FILE *inFile, *outFile;
    int ch;

    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Unable to open input.txt\n");
        return 0;
    }

    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Unable to open output.txt\n");
        fclose(inFile);
        return 0;
    }

    while ((ch = fgetc(inFile)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 'a' + 'A';
        }
        fputc(ch, outFile);
    }

    printf("Conversion completed. Check output.txt\n");

    fclose(inFile);
    fclose(outFile);

    return 0;
}
