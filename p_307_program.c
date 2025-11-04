#include<stdio.h>
int main() {
    long long int N;
    scanf("%lld", &N);

    long long int A[N];
    for(long long int i = 0; i<N; i++) {
        scanf("%lld", &A[i]);
    }
    
    for(long long int i = 0; i<N; i++) {
        for(long long int j = 0; j<N; j++) {
            if(A[i]< A[j]) {
                long long int temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
        }    
    }

    for(long long int i = 0; i<N; i++) {
        printf("%lld ", A[i]);
    }
    return 0;
}