#include<stdio.h>
int main(){
    int n;
    printf("Enter your n number: ");   
    scanf("%d", &n);

    printf("#");
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("#");
        for (int j = 0; j <i; j++)
        {
            printf(" ");
        }
        
        printf("#");
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    
    return 0;
}