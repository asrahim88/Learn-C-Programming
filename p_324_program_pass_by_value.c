#include<stdio.h>
void changeValue(int* x) {
    *x = 20;
    printf("From the change function x = %d\n", *x);
}

int main() {
    int x;
    scanf("%d", &x);

    changeValue(&x);
    printf("From the main function x = %d\n", x);
    return 0;
}