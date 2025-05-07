/*
    Write a C program to take a non-negative integer N and print the pattern as shown below
    For N=5, the pattern should be
    *
    **
    ***
    ****
    *****
    Sample Input:                           Sample Output:
    4                                           *
                                                **
                                                ***
                                                ****
*/

#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

   for (int i = 1; i <=N; i++)
   {
    for (int j = 1; j <=i; j++)
    {
        printf("* ");
    }
    printf("\n");
   }
   
    return 0;
}