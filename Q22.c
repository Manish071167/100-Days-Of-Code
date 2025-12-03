#include <stdio.h>

int main() {
    float cp, sp, diff, percentage;
    printf("Enter the cost price: ");
    scanf("%f", &cp);
    printf("Enter the selling price: ");
    scanf("%f", &sp);

    diff = sp - cp;

    if (diff > 0) {
        percentage = (diff / cp) * 100;
        printf("Profit percentage: %.2f%%\n", percentage);
    } else if (diff < 0) {
        percentage = (diff / cp) * 100;
        printf("Loss percentage: %.2f%%\n", percentage);
    } else {
        printf("Neither profit nor loss (break-even).\n");
    }

    return 0;
}