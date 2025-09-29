#include<stdio.h>
int main() {
    int n, m;

    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
    {
        /* code */
        if (i%m == 0)
        {
            /* code */
            printf("%d ", i);
        }
        
    }
    
    return 0;
}