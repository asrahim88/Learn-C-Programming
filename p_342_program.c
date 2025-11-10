#include<stdio.h>
void showNumbers(int n) {
    if(n<1) 
        return;
    printf("%d\n", n);
    showNumbers(n-1);
}
int main() {
    int n;
    scanf("%d", &n);

    showNumbers(n);
    return 0;
}