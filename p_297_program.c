#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int ch = 65;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 65; j <=ch; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
        ch++;
    }
    
    return 0;
}