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
    int count = 0;
    if(r==c) {
        for(int i = 0; i<r; i++) {
            for(int j = 0; j<c; j++) {
                if(i != j){
                    if(aray[i][j] !=0)
                    {
                        count = 1;
                        break;
                    }
                }
            }
        }
        if(count>0) {
            printf("not Diagonal matrix");
        }else {
            printf("diagonal matrix.");
        }
       
    }else {
        printf("Not diagonal matrix.");
    }
    return 0;
}