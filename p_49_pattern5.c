#include<stdio.h>
int main(){
    int r;
    printf("Enter your row number: ");   
    scanf("%d", &r);

    
    for (int i = 1+64; i <=r+64; i++)
    {
        for (int j = 1+64; j <=i; j++)
        {
                printf("%c ", j);
            
        }
        printf("\n");
    }
    return 0;
}