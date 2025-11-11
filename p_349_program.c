#include<stdio.h>
void printNumber(int n) {
    if(n==0) {
        return ;
    }
    if(n!=1){
        printf("%d ", n);
    }else {
        printf("%d", n);
    }
    printNumber(n-1);
}
int main() {
    int n;
    scanf("%d", &n);
    printNumber(n);
    return 0;
}