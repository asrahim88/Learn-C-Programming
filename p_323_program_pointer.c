#include<stdio.h>
int main() {
    int A = 10;
    float B = 10.5;

    printf("%d %p\n", A, &A);
    printf("%.2f %p\n", B, &B);

    int* address = &A;
    float* addressB = &B;

    printf("%d %p\n", A, address);
    printf("%.2f %p\n", B, addressB);

    printf("%d %p\n", *address, address);
    printf("%.2f %p\n", *addressB, addressB);

    *address = 100;
    *addressB = 50.5;

    printf("%d %p\n", A, address);
    printf("%.2f %p\n", B, addressB);
    return 0;
}