#include <stdio.h>

int main() {
    enum Gender { MALE = 0, FEMALE = 1, OTHER = 2 };

    struct Person {
        char name[100];
        enum Gender gender;
    };

    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter gender (0-MALE, 1-FEMALE, 2-OTHER): ");
    scanf("%d", (int *)&p.gender);

    printf("Name: %s\n", p.name);

    if (p.gender == MALE) {
        printf("Gender: Male\n");
    } else if (p.gender == FEMALE) {
        printf("Gender: Female\n");
    } else if (p.gender == OTHER) {
        printf("Gender: Other\n");
    } else {
        printf("Gender: Unknown\n");
    }

    return 0;
}
