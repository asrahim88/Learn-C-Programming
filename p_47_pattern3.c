#include<stdio.h>
int main(){
    int r;
    printf("Enter your row number: ");   
    scanf("%d", &r);

    
    for (int i = 1; i <=r; i++)
    {
        for (int j = 1; j <=i; j++)
        {
                printf("%d ", j%2);
            
        }
        printf("\n");
    }
    
    return 0;
}