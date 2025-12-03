#include <stdio.h>

int main() {
    enum Month {
        JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
        JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
    };
    enum Month m;

    for (m = JANUARY; m <= DECEMBER; m++) {
        if (m == JANUARY) {
            printf("January has 31 days\n");
        } else if (m == FEBRUARY) {
            printf("February has 28 or 29 days\n");
        } else if (m == MARCH) {
            printf("March has 31 days\n");
        } else if (m == APRIL) {
            printf("April has 30 days\n");
        } else if (m == MAY) {
            printf("May has 31 days\n");
        } else if (m == JUNE) {
            printf("June has 30 days\n");
        } else if (m == JULY) {
            printf("July has 31 days\n");
        } else if (m == AUGUST) {
            printf("August has 31 days\n");
        } else if (m == SEPTEMBER) {
            printf("September has 30 days\n");
        } else if (m == OCTOBER) {
            printf("October has 31 days\n");
        } else if (m == NOVEMBER) {
            printf("November has 30 days\n");
        } else if (m == DECEMBER) {
            printf("December has 31 days\n");
        }
    }

    return 0;
}
