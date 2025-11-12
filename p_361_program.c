#include<stdio.h>
int main() {
    int aray[5][5];

    for(int i =0; i<5; i++) {
        for(int j=0; j<5; j++) {
            scanf("%d", &aray[i][j]);
        }
    }

    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            if(aray[i][j] == 1) {
                int r = i-2;
                int c = j-2;
                if(r<0) {
                    r = -r;
                }
                if(c<0) {
                    c = -c;
                }
                printf("%d", r+c);
            }
        }
    }
    return 0;
}