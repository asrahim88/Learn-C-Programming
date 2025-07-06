#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int numbers[n];
   
    int evenCount = 0;
    int oddCount = 0;
    int eveSum = 0;
    int oddSum = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x%2==0)
        {
            evenCount++;
        }else {
            oddCount++;
        }
        numbers[i] =  x;
    }

    for (int i = 0; i < n; i++)
    {   
        if (numbers[i] % 2 ==0)
        {
            eveSum += numbers[i];
        }else {
            oddSum += numbers[i];
        }
        
        printf("%d ", numbers[i]);
    }
    
    printf("\neven number is %d", evenCount);
    printf("\nodd number is %d", oddCount);
    printf("\nEven number sum =  %d", eveSum);
    printf("\nOdd number sum =  %d", oddSum);

  

    return 0;
}