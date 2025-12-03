#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int freq[256] = {0};
    int i, isAnagram = 1;

    printf("Enter first string: ");
    scanf("%[^\n]s", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]s", str2);

    for (i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]]++;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        freq[(unsigned char)str2[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("The strings are anagrams\n");
    } else {
        printf("The strings are not anagrams\n");
    }

    return 0;
}
