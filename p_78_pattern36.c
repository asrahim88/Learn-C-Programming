#include<stdio.h>
int main(){
    int n;
    printf("Enter your n number: ");   
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {   printf("#");
        for (int j = 0; j < n-2; j++)
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
    printf("\n");

    return 0;
}