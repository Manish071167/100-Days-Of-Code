#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[100];
    struct Date joinDate;
};

int main() {
    struct Employee e;

    printf("Enter employee id: ");
    scanf("%d", &e.id);

    printf("Enter employee name: ");
    scanf("%s", e.name);

    printf("Enter joining day: ");
    scanf("%d", &e.joinDate.day);

    printf("Enter joining month: ");
    scanf("%d", &e.joinDate.month);

    printf("Enter joining year: ");
    scanf("%d", &e.joinDate.year);

    printf("\nEmployee Details:\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Joining Date: %02d-%02d-%04d\n",
           e.joinDate.day, e.joinDate.month, e.joinDate.year);

    return 0;
}
