#include<stdio.h>
int main() {
    // () &
    int a, b, sum, sub, mult, dev, remainder, prefixIncrement, postfixIncrement, prefixDecrement, postfixDecrement;
    printf("Please Enter a number: \n");
    scanf("%d", &a);
    printf("Please Enter b number: \n");
    scanf("%d", &b);
    
    sum = a + b;
    sub = a-b;
    mult = a*b;
    dev = a/b;
    remainder = a % b;
    prefixIncrement = ++a;
    postfixIncrement = a++;

    prefixDecrement = --b;
    postfixDecrement = b--;

    printf("The sum of two value is : %d\n", sum);
    printf("The sub of two value is : %d\n", sub);
    printf("The mult of two value is : %d\n", mult);
    printf("The dev of two value is : %d\n", dev);
    printf("The remainder of two value is : %d\n", remainder);
    printf("prefix increment of a is : %d\n", prefixIncrement);
    printf("postfix increment of a is : %d\n", postfixIncrement);
    printf("prefix decrement of b is : %d\n", prefixDecrement);
    printf("postfix decrement of b is : %d\n", postfixDecrement);
    return 0;
}