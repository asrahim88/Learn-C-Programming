#include<stdio.h>
int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    
    int aray[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", &aray[i]);
    }

    for(int i = 0; i<n-1; i++) {
        for(int j = 1; j<n; j++) {
            if(aray[i]+ aray[j] == x)
            {
                printf("%d %d\n", aray[i], aray[j]);
            }
        }
        printf("\n");
    }
    return 0;
}