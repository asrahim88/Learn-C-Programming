#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <=N; i++)
    {
        long long int x, fact = 1;
        scanf("%lld", &x);

        if(x == 0 ) {
            printf("1\n");
            continue;
        }
        for (long long int i = 1; i <=x; i++)
        {
            fact = fact * i;
        }
        printf("%lld\n", fact);
    }
    return 0;
}