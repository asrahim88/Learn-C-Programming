#include<stdio.h>
int main() {
    int N,M;
    scanf("%d %d", &N, &M);

    int multiple = N * M;
    printf("%d", multiple / 2);
    return 0;
}