#include<stdio.h>
int main() {

    long long int n;
    scanf("%lld", &n);

    long long int sum = 0;
    long long int f_sum = 0;

    for (int i = 1; i <n; i++)
    {
        long long int m;
        scanf("%lld", &m);
        sum += m;
        f_sum +=i;
    }
    printf("%lld", (f_sum+n)-sum);
    return 0;
}