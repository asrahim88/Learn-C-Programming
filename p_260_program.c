#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int aray1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &aray1[i]);
    }

    int m;
    scanf("%d", &m);

    int aray2[m];
    for(int i=0; i<m; i++){
        scanf("%d", &aray2[i]);
    }

    int aray3[n+m];

    for (int i = 0; i < n; i++)
    {
        aray3[i] = aray1[i];
    }
    for (int i = 0; i < m; i++)
    {
        aray3[n+i] = aray2[i];
    }
    for (int i = 0; i <n+m; i++)
    {
        printf("%d ", aray3[i]);
    }
    
    
    
    return 0;
}