#include<stdio.h>
int abs(int n) {
    if( n<1){
        return n = -n;
    }
}
int main() {
    int r;
    scanf("%d", &r);

    int aray[r][r];
    for(int i = 0; i<r; i++) {
        for(int j= 0; j<r; j++) {
            scanf("%d", &aray[i][j]);
        }
    }
    int p_sum = 0;
    int s_sum = 0;
    for(int i=0; i<r; i++) {
        for(int j=0; j<r; j++) {
            if(i==j) {
                p_sum += aray[i][j];
            }
        }
    }
    for(int i=0; i<r; i++) {
        for(int j=0; j<r; j++) {
            if(i+j==r-1) {
                s_sum += aray[i][j];
            }
        }
    }

    printf("%d", abs(p_sum - s_sum));
    return 0;
}