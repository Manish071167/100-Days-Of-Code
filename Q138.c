#include <stdio.h>

int main() {
    enum Color { RED, GREEN, BLUE, YELLOW };
    enum Color c;

    for (c = RED; c <= YELLOW; c++) {
        if (c == RED) {
            printf("RED = %d\n", c);
        } else if (c == GREEN) {
            printf("GREEN = %d\n", c);
        } else if (c == BLUE) {
            printf("BLUE = %d\n", c);
        } else if (c == YELLOW) {
            printf("YELLOW = %d\n", c);
        }
    }

    return 0;
}
