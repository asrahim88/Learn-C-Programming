#include<stdio.h>
#include<limits.h>
int main() {
    int T;
    scanf("%d", &T);
    for(int k = 0; k<T; k++) 
    {
        int N;
        scanf("%d", &N);

        int A[N];
        for(int i = 0; i<N; i++) {
            scanf("%d", &A[i]);
        }

        int minNumber = INT_MAX;
        
        for(int i = 0; i<N; i++) {
            for(int j = i+1; j<N; j++) {
                if(A[i]+A[j]+j-i < minNumber) {
                    minNumber = A[i]+A[j]+j-i;
                }
            }
        }
        printf("%d\n", minNumber);
    }
    return 0;
}

