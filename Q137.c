#include <stdio.h>

int main() {
    enum Role { ADMIN = 1, USER, GUEST };
    enum Role r;

    printf("Enter role (1-ADMIN, 2-USER, 3-GUEST): ");
    scanf("%d", (int *)&r);

    if (r == ADMIN) {
        printf("Welcome, Admin!\n");
    } else if (r == USER) {
        printf("Welcome, User!\n");
    } else if (r == GUEST) {
        printf("Welcome, Guest!\n");
    } else {
        printf("Unknown role\n");
    }

    return 0;
}
