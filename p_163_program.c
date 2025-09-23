#include<stdio.h>
int main() {
    int number;
    printf("Please Enter A Number: ");
    scanf("%d", &number);

    if (number%2==0) {
        printf("This %d is even number.", number);
    } else {
        printf("This %d is odd number.", number);
    }
    return 0;
}