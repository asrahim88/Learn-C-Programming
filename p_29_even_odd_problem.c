#include<stdio.h>
int main()
{
    long long int n, k;
    scanf("%lld %lld", &n, &k);
    long long int odd = 0;
    if(n%2==0)
        odd = n/2;
    else
        odd = (n/2)+1;
    if (k <= odd)
        printf("%lld", (2*k)-1);
    else
        printf("%lld", (k-odd)*2);
    return 0;
}