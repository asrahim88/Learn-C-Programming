#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int aray[n];
    int i = 0;

    while (i<n)
    {
        scanf("%d", &aray[i]);
        i++;
    }

    for (int i = 0, j= n-1; i < j; i++, j--)
    {
        int temp;
        temp = aray[i];
        aray[i] = aray[j];
        aray[j] = temp;
    }
    
    int x = 0; 
    while (x<n)
    {
        printf("%d ", aray[x]);
        x++;
    }
    
    
    
    return 0;
}