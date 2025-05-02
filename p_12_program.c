/*
    Write a C program to take integer value as input and print that value. There is a twist! The input will contain a % sign.
    Sample Input:                   Sample Output:
        20%                                     20
*/
#include<stdio.h>
int main()
{
    int number;
    char percent;

    printf("Enter a value with %% sign. (e.g 20%%)\n");
    scanf("%d%c", &number, &percent);
    if (percent == '%')
    {
        printf("%d", number);
    }else {
        printf("Invalid Input.");
    }
    return 0;
}