#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};
    int i, found = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (freq[str[i] - 'a'] == 1) {
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                found = 1;
                break;
            } else {
                freq[str[i] - 'a']++;
            }
        }
    }

    if (!found) {
        printf("No repeating lowercase alphabet found\n");
    }

    return 0;
}
