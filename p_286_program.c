#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int aray[n];
    for(int i =0; i<n; i++) {
        scanf("%d", &aray[i]);
    }

    for(int i = 0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(aray[i]<aray[j]) {
                int temp = aray[i];
                aray[i] = aray[j];
                aray[j] = temp;
            }
        }
    }

    for(int i = 0; i<n; i++) {
        printf("%d ", aray[i]);
    }
    return 0;
}