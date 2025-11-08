#include<stdio.h>
int main() {
    int T;
    scanf("%d", &T);

    for(int i = 0; i<T; i++) {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if(a == b && a == c && a ==d) {
            printf("YES\n");
        }else {
            printf("NO\n");
        }
    }
    return 0;
}