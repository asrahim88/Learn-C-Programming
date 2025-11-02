#include<stdio.h>

int sum(int a, int b) {
    int result = a +b;
    return result;
}

int sub(int a, int b) {
    int result = a - b;
    return result;
}

int mult(int a, int b) {
    int result = a * b;
    return result;
}

int division(int a, int b) {
    int result = a / b;
    return result;
}

int remind(int a, int b) {
    int result = a % b;
    return result;
}

int main() {
    int a,b;
    scanf("%d %d", &a, &b);

    int add = sum(a,b);
    int subs = sub(a, b);
    int multiplication = mult(a,b);
    int divide = division(a, b);
    int remain = remind(a,b);

    printf("%d + %d = %d\n", a, b, add);
    printf("%d - %d = %d\n", a, b, subs);
    printf("%d * %d = %d\n", a, b, multiplication);
    printf("%d / %d = %d\n", a, b, divide);
    printf("%d %% %d = %d\n", a, b, remain);
    return 0;
}