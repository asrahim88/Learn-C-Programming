#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int numbers[n];
    int max1 = numbers[0];
    int max2 = numbers[0];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] >  max1)
        {
            max2 = max1;
            max1 = numbers[i];
        }
    }

    printf("Max2 number is %d ", max2);
    
    
    return 0;
}