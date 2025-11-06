#include<stdio.h>
int count_odd(int A[], int N) {
    int count = 0;
    for(int i = 0; i<N; i++) {
        if(A[i]%2 !=0) {
            count++;
        }
    }
    return count;
}
int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for(int i = 0; i<N; i++) {
        scanf("%d", &A[i]);
    }

    printf("%d", count_odd(A, N));
    return 0;
}