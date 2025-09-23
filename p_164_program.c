#include<stdio.h>
int main() {
    int x, y;
    scanf("%d %d", &x,&y);

    if(x>y) {
        printf("%d is big", x);
    }
    else if (x<y) {
        printf("%d is big", y);
    } else {
        printf("They are equal");
    }
    return 0;
}