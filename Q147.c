#include <stdio.h>

struct Employee {
    int id;
    char name[100];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee e, e_read;

    printf("Enter employee id: ");
    scanf("%d", &e.id);

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter employee salary: ");
    scanf("%f", &e.salary);

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Unable to open file for writing\n");
        return 0;
    }

    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Unable to open file for reading\n");
        return 0;
    }

    fread(&e_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee data read from file:\n");
    printf("ID: %d\n", e_read.id);
    printf("Name: %s\n", e_read.name);
    printf("Salary: %.2f\n", e_read.salary);

    return 0;
}