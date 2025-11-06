#include<stdio.h>
void change_it(int A[], int N) {
    A[N-1] = 100;
    for(int i = 0; i<N; i++) {
        printf("%d ", A[i]);
    }
}
int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for(int i = 0; i<N; i++) {
        scanf("%d", &A[i]);
    }
    change_it(A, N);
    return 0;
}