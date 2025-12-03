#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

struct Student getTopStudent() {
    struct Student s;

    printf("Enter top student name: ");
    scanf("%s", s.name);

    printf("Enter top student roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter top student marks: ");
    scanf("%f", &s.marks);

    return s;
}

int main() {
    struct Student top;

    top = getTopStudent();

    printf("Top Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
