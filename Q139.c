#include <stdio.h>

int main() {
    enum Level { LOW = 1, MEDIUM = 5, HIGH = 10 };
    enum Level l;

    l = LOW;
    printf("LOW = %d\n", l);

    l = MEDIUM;
    printf("MEDIUM = %d\n", l);

    l = HIGH;
    printf("HIGH = %d\n", l);

    return 0;
}
