#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int numbers[n];
    int maxNumbers = numbers[0];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] > maxNumbers)
        {
            maxNumbers = numbers[i];
        }
    }

    printf("Max number is %d ", maxNumbers);
    
    
    return 0;
}