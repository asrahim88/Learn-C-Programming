#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for(int i = 0; i<N; i++) {
        scanf("%d", &A[i]);
    }

    int min = A[0];
    int indx = 1;

    for(int i = 0; i<N; i++) {
        if(A[i]<min) {
            min = A[i];
            indx = i+1;
        }
    }
    printf("%d %d", min, indx);
    return 0;
}