/*
    Write a C program to take one positive integer as input and print double of it.
Sample Input:                           Sample Output:
5                                               10
*/
#include<stdio.h>
int main(){
    int a;
    printf("Enter a positive number: ");
    scanf("%d", &a);
    if(a>0) {
        printf("%d", a*2);
    }
    else {
        printf("please enter the positive number");
    }
    return 0;
}