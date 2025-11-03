#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);

    int b = 0, c = 0;
    b = a%10;
    c = a/10;

    if(b%c == 0 || c%b == 0) {
        printf("YES");
    }else {
        printf("NO");
    }
    
    return 0;
}