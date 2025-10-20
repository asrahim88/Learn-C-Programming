#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int aray[n];

    for (int i = 0; i <n; i++)
    {
        scanf("%d", &aray[i]);
    }

    int x;
    scanf("%d", &x);

    for (int i = x; i < n-1; i++)
    {
            aray[i] = aray[i+1];
       
    }

    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", aray[i]);       
    }
    return 0;
}