#include<stdio.h>
int main(){
    int row;
    printf("Enter your row number: ");   
    scanf("%d", &row);

    for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j <=row-i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}