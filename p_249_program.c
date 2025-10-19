#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int aray[n+1];

    for(int i= 0; i<n; i++) {
        scanf("%d", &aray[i]);
    }

    int index, value;
    scanf("%d %d", &index, &value);

    for (int i = n+1; i >index; i--)
    {
        aray[i] = aray[i-1];
    }
    aray[1] = value;

    for (int i = 0; i <=n; i++)
    {
        printf("%d ", aray[i]);
    }
    
    
    return 0;
}