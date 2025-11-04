#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int aray[N];
    for(int i = 0; i<N; i++) {
        scanf("%d", &aray[i]);
    }

    int minNumber = aray[0];
    for(int i = 0; i<N; i++) {
        if(aray[i] < minNumber) {
            minNumber = aray[i];
        }
    }

    printf("%d", minNumber);
    return 0;
}