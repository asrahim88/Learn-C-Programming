#include<stdio.h>
int main() {
    int row, column;
    scanf("%d %d", &row, &column);

    int i = 0;

    while (i<row)
    {
        int j = 0;
        while (j<i)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}