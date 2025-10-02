#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int aray[200001];
    for (int i = 1; i <n; i++)
    {
        aray[i] = 0;
    }
    
    for (int i = 1; i <n; i++)
    {
        int x;
        scanf("%d", &x);
        aray[x] = 1;
    }
    
    for (int i = 1; i <n; i++)
    {
        if (aray[i] == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}