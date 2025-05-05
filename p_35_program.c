/*
     Write a C program that will take two integers as input from you. And then it will show us in output whether any one of those two numbers is divisible by the other or not. Sample Input 1: 
    Enter the first number: 13 
    Enter the second number: 39 
    Sample Output 1: 
    The second number is divisible by the first number. 
    Sample Input 2: 
    Enter the first number: 38 
    Enter the second number: 13 
    Sample Output 2: 
    None of them are divisible by the other. 


*/
#include<stdio.h>
int main(){
    int m, n;
    printf("Enter the first number: ");
    scanf("%d", &m);
    printf("\nEnter the second number: ");
    scanf("%d",&n);
    if (m%n==0)
    {
        printf("first number is divisible by second number.");
    }else if (n%m==0)
    {
        printf("Second number is divisible by the first number.");
    }else {
        printf("None of them are divisible by the other. ");
    }
    
    
    return 0;
}