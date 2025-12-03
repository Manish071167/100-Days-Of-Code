#include <stdio.h>

int main() {
    int late_days;
    float fine = 0.0;

    printf("Enter number of days late: ");
    scanf("%d", &late_days);
    if (late_days <= 5) {
        fine = late_days * 2;
    } else if (late_days <= 10) {
        fine = (5 * 2) + ((late_days - 5) * 4);
    } else if (late_days <= 30) {
        fine = (5 * 2) + (5 * 4) + ((late_days - 10) * 6);
    } else {
        printf("Membership Cancelled.\n");
    }
    printf("Library fine: ₹%.2f\n", fine);
    return 0;
}
