#include<stdio.h>
int main() {
    // () &
    int a, b, sum, sub, mult, dev;
    printf("Please Enter a number: \n");
    scanf("%d", &a);

    printf("Please Enter b number: \n");
    scanf("%d", &b);
    
    sum = a + b;
    sub = a-b;
    mult = a*b;
    dev = a/b;
    printf("The sum of two value is : %d\n", sum);
    printf("The sub of two value is : %d\n", sub);
    printf("The mult of two value is : %d\n", mult);
    printf("The dev of two value is : %d\n", dev);
    return 0;
}