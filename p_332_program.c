#include<stdio.h>
int my_abs(int a) {
    if(a<0) {
        a = -a;
    }
    return a;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", my_abs(n));
    return 0;
}