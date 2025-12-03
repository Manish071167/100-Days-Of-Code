#include <stdio.h>

int main() {
    FILE *fp;
    int n, i;
    char name[100];
    int roll;
    float marks;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Unable to create students.txt\n");
        return 0;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name);
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &roll);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &marks);
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Unable to open students.txt\n");
        return 0;
    }

    printf("Student records:\n");
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s Roll: %d Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
