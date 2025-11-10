#include<stdio.h>
void showNumbers(int n){
    if(n>5)
        return;
    showNumbers(n+1);
    printf("%d\n", n);
}
int main() {
    int n;
    scanf("%d", &n);
    showNumbers(n);
    return 0;
}