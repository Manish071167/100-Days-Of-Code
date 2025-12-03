#include <stdio.h>

int main() {
    enum Status { SUCCESS, FAILURE, TIMEOUT };
    enum Status s;

    printf("Enter status (0 for SUCCESS, 1 for FAILURE, 2 for TIMEOUT): ");
    scanf("%d", (int *)&s);

    if (s == SUCCESS) {
        printf("Operation successful\n");
    } else if (s == FAILURE) {
        printf("Operation failed\n");
    } else if (s == TIMEOUT) {
        printf("Operation timed out\n");
    } else {
        printf("Invalid status\n");
    }

    return 0;
}
