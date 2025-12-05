#include <stdio.h>
#include <string.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

int main() {
    struct Student s1, s2;

    printf("Enter first student name: ");
    scanf("%s", s1.name);
    printf("Enter first student roll: ");
    scanf("%d", &s1.roll);
    printf("Enter first student marks: ");
    scanf("%d", &s1.marks);

    printf("Enter second student name: ");
    scanf("%s", s2.name);
    printf("Enter second student roll: ");
    scanf("%d", &s2.roll);
    printf("Enter second student marks: ");
    scanf("%d", &s2.marks);

    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll == s2.roll &&
        s1.marks == s2.marks) {
        printf("Same\n");
    } else {
        printf("Not Same\n");
    }

    return 0;
}