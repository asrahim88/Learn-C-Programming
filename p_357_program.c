#include<stdio.h>
int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N][M];
    for(int i = 0; i<N; i++) {
        for(int j = 0; j<M; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    int X;
    scanf("%d", &X);

    int flag = 0;

    for(int i = 0; i<N; i++) {
        for(int j = 0; j<M ; j++) {
            if(A[i][j] == X){
                flag = 1;
                break;
            }
        }
    }
    if(flag == 0) {
        printf("will take number");
    }else {
        printf("will not take number");
    }
    return 0;
}