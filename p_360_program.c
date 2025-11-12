#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int aray[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &aray[i]);
    }
    for(int i=0, j=n-1; i<j, j>=i; i++, j--) {
        if(i !=j){
            printf("%d ", aray[i]);
            printf("%d ", aray[j]);
        }else {
            printf("%d", aray[j]);
        }
    }

    return 0;
}