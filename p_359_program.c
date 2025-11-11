#include<stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int aray[r][c];

    for(int i = 0; i<r; i++) {
        for(int j = 0; j<c; j++) {
            scanf("%d", &aray[i][j]);
        }
    }

    int flag = 0;

    if(r == c) {
        for(int i =0; i<r; i++) {
            for(int j = 0; j<c; j++) {
                if(i !=j && aray[i][j] !=0) {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0) {
            printf("This scaler matrix");
        }else {
            printf("This not scaler matrix.");
        }
    }else {
        printf("This not scaler matrix.");
    }
    return 0;
}