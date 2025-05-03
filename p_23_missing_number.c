#include<stdio.h>
int main(){
    long int n;
    long int sum = 1;
    long int numbers = 0;
    scanf("%ld", &n);

    for (long int i = 2; i <= n; i++)
    {
        /* code */
        long int j;
        scanf("%ld", &j);
        numbers += j;
        sum +=i;
    }
    printf("%ld", sum-numbers);
    
    return 0;
}