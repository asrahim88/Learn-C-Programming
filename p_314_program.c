#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    
    int aray[N];
    for(int i = 0; i<N; i++) {
        scanf("%d", &aray[i]);
    }

    int count = 0;

    for(int i = 0; i<N; i++) {
        if(aray[i]%2 !=0) {
            count++;
        }
    }

    printf("%d", count);
    
    return 0;
}