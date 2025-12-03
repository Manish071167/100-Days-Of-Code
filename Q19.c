#include <stdio.h>

int main() {
    int s1, s2, s3;
    printf("Enter the lengths of three sides of the triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);
        if (s1 == s2 && s2 == s3) {
        printf("The triangle is Equilateral.\n");
    } else if (s1 == s2 || s1 == s3 || s2 == s3) {
        printf("The triangle is Isosceles.\n");
    } else {
        printf("The triangle is Scalene.\n");
    }
        return 0;
}