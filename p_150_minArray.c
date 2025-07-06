#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    // [4,8,7,5,6,3]

    int numbers[n];
    int minNumber = numbers[0];
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (numbers[i] < minNumber)
        {
            minNumber = numbers[i];
        }
    }

    printf("Min number is %d ", minNumber);
    
    
    return 0;
}