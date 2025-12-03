#include <stdio.h>

int main() {
    enum Light { RED, YELLOW, GREEN };
    enum Light signal;

    printf("Enter signal (0 for RED, 1 for YELLOW, 2 for GREEN): ");
    scanf("%d", (int *)&signal);

    if (signal == RED) {
        printf("Stop\n");
    } else if (signal == YELLOW) {
        printf("Wait\n");
    } else if (signal == GREEN) {
        printf("Go\n");
    } else {
        printf("Invalid signal\n");
    }

    return 0;
}
