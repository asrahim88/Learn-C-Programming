#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int aray[N];
    for(int i = 0; i<N; i++) {
        scanf("%d", &aray[i]);
    }

    int maxNumber = aray[0];

    for(int i = 0; i<N; i++) {
        if(aray[i]>maxNumber) {
            maxNumber = aray[i];
        }
    }

    printf("Max number = %d", maxNumber);
    return 0;
}