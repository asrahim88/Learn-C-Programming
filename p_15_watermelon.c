#include<stdio.h>
int main() {
    int w;
    printf("Please enter the weight of watermelon: ");
    scanf("%d", &w);
    if (w%4==0 && w != 2) {
        printf("possible");
    } else {
        printf("Impossible");
    }
    return 0;
}