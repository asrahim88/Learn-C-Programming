#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int space= n-1;
    int hash = 1;
    for(int i =1; i<n; i++) {
        for(int j = 1; j<=space; j++) {
            printf(" ");
        }
        for(int j=1; j<=hash; j++) {
            if(i%2 !=0) {
                printf("#");
            }else {
                printf("-");
            }
        }
        printf("\n");
        space--;
        hash+=2;
    }

    int space1 = 0;
    int hash2 = n*2-1;

    for(int i = n; i>=1; i--) {
        for(int j = 1; j<=space1; j++) {
            printf(" ");
        }
        for(int j = 1; j<=hash2; j++) {
            if(i%2 != 0) {
                printf("#");
            }else {
                printf("-");
            }
        }
        printf("\n");
        space1++;
        hash2-=2;
    }
    return 0;
}