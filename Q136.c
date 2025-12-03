#include <stdio.h>

int main() {
    enum Menu { ADD = 1, SUBTRACT, MULTIPLY };
    enum Menu choice;
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter choice (1-ADD, 2-SUBTRACT, 3-MULTIPLY): ");
    scanf("%d", (int *)&choice);

    switch (choice) {
        case ADD:
            printf("Result = %d\n", a + b);
            break;
        case SUBTRACT:
            printf("Result = %d\n", a - b);
            break;
        case MULTIPLY:
            printf("Result = %d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
