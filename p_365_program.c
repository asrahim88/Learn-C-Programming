#include<stdio.h>
long long int printFact(int n) {
    if(n == 0) {
        return 1;
    }
    long long int res = printFact(n-1);
    return res * n;
}
int main() {
    int n;
    scanf("%d", &n);

    long long int res = printFact(n);
    printf("%lld", res);
    return 0;
}