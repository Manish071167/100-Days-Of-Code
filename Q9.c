#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest, compound_interest, amount;
    int i;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter annual interest rate: ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100.0;

    amount = principal;
    for (i = 0; i < time; i++) {
        amount = amount * (1 + rate / 100.0);
    }
    compound_interest = amount - principal;

    printf("\nSimple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}