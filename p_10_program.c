/*
    Write a C program to take two positive integers as input and show the summation, subtraction and
    multiplication of those two numbers.
    Sample Input:                           Sample Output:
    5 2                                         7 3 10
*/

#include<stdio.h>
int main(){
    int a,b,summation, subtraction, multiplication;
    printf("Enter two positive number: ");
    scanf("%d %d", &a, &b);
    if(a>0 & b>0) {
        summation = a+b;
        subtraction = a-b;
        multiplication = a*b;
        printf("%d %d %d", summation, subtraction, multiplication);
    }
    else {
        printf("please enter the two positive number");
    }
    return 0;
}

