#include <stdio.h>

int main() {
    int array[100], maximum, minimum, size, c;

    printf("Enter the number of elements in array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);

    for (c = 0; c < size; c++) {
        scanf("%d", &array[c]);
    }

    maximum = array[0];
    minimum = array[0];

    for (c = 1; c < size; c++) {
        if (array[c] > maximum) {
            maximum = array[c];
        }
        if (array[c] < minimum) {
            minimum = array[c];
        }
    }

    printf("Maximum element is: %d\n", maximum);
    printf("Minimum element is: %d\n", minimum);

    return 0;
}