#include<stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a>b && a>c)
    {
        printf("A is bigger.");
    }
    else if (b>a && b>c) {
        printf("B is bigger.");
    } else if (c>a && c>b) {
        printf("C is bigger");
    } else if (a == b && b>c) {
        printf("A and B is bigger.");
    } else if (b == c && c > a) {
        printf("B and C is bigger.");
    } else if(c == a && a > b) {
        printf("A and C is bigger.");
    } else {
        printf("They are equal.");
    }
    
    return 0;
}