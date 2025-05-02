/*
    Write a C program to take a character variable and input and show the corresponding ASCII value of that
    character
    Sample Input:                           Sample Output:
        A                                       65
        C                                       67
        a                                       97
        d                                       100
*/
#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    printf("%d", a);
    return 0;
}