#include<stdio.h>
void showNumbers(int n) {
    if(n == 6)
        return;
    printf("%d\n", n);
    showNumbers(n+1);
}

int main() {
    int n= 1;
    showNumbers(n);
    
    return 0;
}