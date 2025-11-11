#include<stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int Aray[r][c];

    for(int i = 0; i<r; i++) {
        for(int j = 0; j<c; j++) {
            scanf("%d", &Aray[i][j]);
        }
    }

    for(int i = 0; i<r; i++) {
        printf("%d -> ", i);
        for(int j= 0; j<c; j++) {
            printf("%d ", Aray[i][j]);
        }
        printf("\n");
    }
    return 0;
}