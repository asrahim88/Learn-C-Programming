#include<stdio.h>
int main() {
    int aray[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &aray[i]);
    }

    int odd =0;
    int even = 0;

    for (int i = 0; i < 10; i++)
    {
        if (aray[i]%2==0)
            even++;
        else 
            odd++;
    }
    
    printf("Even = %d\n", even);
    printf("Odd = %d", odd);
    
    return 0;
}