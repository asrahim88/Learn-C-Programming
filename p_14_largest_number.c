#include<stdio.h>

int main() {
    int a, b, c;
    printf("Please Enter Three numbers for comparison: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("%d is the largest number among the three.\n", a);
    } else if (b > a && b > c) {
        printf("%d is the largest number among the three.\n", b);
    } else if (c > a && c > b) {
        printf("%d is the largest number among the three.\n", c);
    } else if (a == b && b == c) {
        printf("All three numbers are equal.\n");
    } else {
        printf("Two numbers are equal and largest.\n");
    }

    return 0;
}
