#include <stdio.h>

int main() {
    char str[1000], longest[1000], current[1000];
    int i = 0, j = 0, maxLen = 0, curLen = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            current[j] = str[i];
            j++;
            curLen++;
        } else {
            if (curLen > maxLen) {
                int k;
                for (k = 0; k < curLen; k++) {
                    longest[k] = current[k];
                }
                longest[curLen] = '\0';
                maxLen = curLen;
            }
            j = 0;
            curLen = 0;
            if (str[i] == '\0') {
                break;
            }
        }
        i++;
    }

    if (maxLen > 0) {
        printf("Longest word: %s\n", longest);
    } else {
        printf("No word found\n");
    }

    return 0;
}
