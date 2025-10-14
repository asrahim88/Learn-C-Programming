#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int x, fact = 1;
        scanf("%d", &x);
                
        for (int i = 1; i <=x; i++)
        {
            fact = fact * i;
        }
        printf("%d\n", fact);
    }
    
    return 0;
}