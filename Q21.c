#include <stdio.h>

int main() {
    int month_num;
    printf("Enter the month number (1-12): ");
    scanf("%d", &month_num);

    switch (month_num) {
        case 1:
            printf("Month: January, Days: 31\n");
            break;
        case 2:
            printf("Month: February, Days: 28\n");
            break;
        case 3:
            printf("Month: March, Days: 31\n");
            break;
        case 4:
            printf("Month: April, Days: 30\n");
            break;
        case 5:
            printf("Month: May, Days: 31\n");
            break;
        case 6:
            printf("Month: June, Days: 30\n");
            break;
        case 7:
            printf("Month: July, Days: 31\n");
            break;
        case 8:
            printf("Month: August, Days: 31\n");
            break;
        case 9:
            printf("Month: September, Days: 30\n");
            break;
        case 10:
            printf("Month: October, Days: 31\n");
            break;
        case 11:
            printf("Month: November, Days: 30\n");
            break;
        case 12:
            printf("Month: December, Days: 31\n");
            break;
        default:
            printf("Invalid month number entered.\n");
    }

    return 0;
}