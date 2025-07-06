#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }
    
    int min1 = numbers[0];
    int min2 = numbers[0];
    
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] < min1)
        {
            min2 = min1;
            min1 = numbers[i];
        }
    }

    printf("second min number is %d ", min2);
    

    return 0;
}