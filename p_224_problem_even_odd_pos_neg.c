#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int even = 0, odd = 0, positive = 0, negative = 0;
    for(int i = 1; i<=N; i++) {
        int x;
        scanf("%d", &x);

        if(x >0) {
            positive++;
        }else if (x<0){
            negative++;
        }

        if (x%2==0)
        {
            even++;
        }else {
            odd++;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    return 0;
}