#include<stdio.h>
int main() {
    int row, column;
    scanf("%d %d", &row, &column);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}