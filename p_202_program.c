#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    while (n>=1)
    {
        sum++;
        n = n/10;
    }
    printf("%d Digits", sum);
    
    return 0;
}