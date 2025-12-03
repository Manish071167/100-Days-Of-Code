#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Unable to create file\n");
        return 0;
    }

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("Data successfully saved to info.txt\n");

    return 0;
}
