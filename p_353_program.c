#include<stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int aray[r][c];

    for(int i = 0; i<r; i++) {
        for(int j=0; j<c; j++) {
            scanf("%d", &aray[i][j]);
        }
    }
    int index;
    scanf("%d", &index);
    for(int j=0; j<c; j++) {
        printf("%d ", aray[index][j]);
    }

    return 0;
}