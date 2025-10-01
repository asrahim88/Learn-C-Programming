#include<stdio.h>
int main() {
    long long int N, k;
    scanf("%lld %lld", &N, &k);
    
    long long odd = 0;

    if(N%2==0) {
        odd = N/2;
    }else {
        odd = N/2+1;
    }

    if (k<=odd)
    {
        printf("%lld", 2*k-1);
    } else {
        
        printf("%lld",(k-odd)*2);
    }
    

    return 0;
}