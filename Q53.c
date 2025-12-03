#include <stdio.h>

int main() {
    int rows = 9;
    int i, j, num_stars;

    for (i = 1; i <= rows; i++) {
        if (i <= (rows + 1) / 2) {
            num_stars = 2 * i - 1;
        } else {
            num_stars = 2 * (rows - i) + 1;
        }

        for (j = 0; j < num_stars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}