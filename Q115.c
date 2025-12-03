#include <stdio.h>

int main() {
    char s[1000], t[1000];
    int freq[26] = {0};
    int i, isAnagram = 1;

    printf("Enter first string: ");
    scanf("%s", s);

    printf("Enter second string: ");
    scanf("%s", t);

    for (i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
    }

    for (i = 0; t[i] != '\0'; i++) {
        freq[t[i] - 'a']--;
    }

    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
