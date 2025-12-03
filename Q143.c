#include <stdio.h>

int main() {
    struct Student {
        char name[100];
        int roll_no;
        float marks;
    };

    int n, i, topIndex = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &students[i].roll_no);

        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
    }

    for (i = 1; i < n; i++) {
        if (students[i].marks > students[topIndex].marks) {
            topIndex = i;
        }
    }

    printf("\nTop Student:\n");
    printf("Name: %s\n", students[topIndex].name);
    printf("Roll No: %d\n", students[topIndex].roll_no);
    printf("Marks: %.2f\n", students[topIndex].marks);

    return 0;
}
