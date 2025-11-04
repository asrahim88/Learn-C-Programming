#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    
    int A[N];
    for(int i = 0; i<N; i++) {
        scanf("%d", &A[i]);
    }

    int X;
    scanf("%d", &X);

    int flag = -1;
    for(int i = 0; i<N; i++) {
        if(A[i] == X) {
            flag = i;
            break;
        }
    }

    if(flag>=0) {
        printf("%d", flag);
    }else {
        printf("-1");
    }
    return 0;
}