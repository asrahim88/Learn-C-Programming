#include<stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    
    int aray[r][c];

    for(int i =0; i<r; i++) {
        for(int j = 0; j<c; j++) {
            scanf("%d", &aray[i][j]);
        }
    }

    if(r==1) {
        printf("Row matrix");
    }else if(c== 1) {
        printf("Column matrix");
    }else if (r==c) {
        printf("Square matrix");
    }else {
        printf("Others matrix.");
    }
    return 0;
}