#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for(int i = 0; i<N; i++) {
        scanf("%d", &A[i]);
    }

    int min = A[0];
    int max = A[0];
    int minIndx = 0;
    int maxIndx = 0;

    for(int i = 0; i<N; i++) {
        if(A[i]<min) {
            min = A[i];
            minIndx = i;
        }
        if(A[i]> max) {
            max = A[i];
            maxIndx = i;
        }
    }
    A[minIndx] = max;
    A[maxIndx] = min;

    for(int i = 0; i<N; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}