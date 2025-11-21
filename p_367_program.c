#include<stdio.h>
int main() {
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of double %zu bytes\n", sizeof(double));
    printf("Size of short int %zu bytes\n", sizeof(short int));
    printf("size of unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("Size of long int %zu bytes\n", sizeof(long int));
    printf("Size of long long int: %zu bytes\n", sizeof(long long int));
    printf("Size of unsigned long long int: %zu bytes\n", sizeof(unsigned long long int));
    printf("Size of long double %zu bytes\n", sizeof(long double));



    short int z;
    int a;
    unsigned int b;
    
    float c;
    double d;
    

    return 0;
}