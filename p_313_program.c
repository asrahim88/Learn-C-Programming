#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int aray[N];
    for(int i = 0; i<N; i++) {
        scanf("%d", &aray[i]);
    }

    for(int i = 0; i<N; i++) {
        if(aray[i] % 2 == 0) {
            printf("%d ", aray[i]);
        }
    } 

    
    return 0;
}