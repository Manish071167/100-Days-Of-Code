#include <stdio.h>

int main() {
    int n;
    int prod = 1;
    int hasOdd = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;         
    if (n == 0) {
        printf("0\n");
        return 0;
    }

    while (n > 0) {
        int d = n % 10;
        if (d % 2 != 0) {  
            prod *= d;
            hasOdd = 1;
        }
        n /= 10;
    }

    if (hasOdd)
        printf("%d", prod);
    else
        printf("1\n");  

    return 0;
}
