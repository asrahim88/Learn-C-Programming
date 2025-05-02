#include<stdio.h>
int main()
{
    int number;
    printf("Please Enter A Number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("This (%d) is Even number: ", number);
    } else {
        printf("This (%d) is Odd number: ", number);
    }
    return 0;
}