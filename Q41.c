#include <stdio.h>

int main() {
    int n, p = 1;
    int first, last;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 0 && n <= 9) {   
        printf("%d", n);
        return 0;
    }

    last = n % 10;            

    
    int temp = n;
    while (temp >= 10) {
        temp /= 10;
        p *= 10;
    }
    first = temp;             

    n = n % p;                
    n /= 10;                  
    n = last * p + n * 10 + first;

    printf("%d", n);
    return 0;
}
