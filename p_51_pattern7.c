#include<stdio.h>
int main(){
    int row;
    printf("Enter your row number: ");   
    scanf("%d", &row);
   
    for (int i = row; i >=1; i--)
    {
        for (int j = row; j >=i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}