#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int count_odd=0;
    int count_even=0;
    int array[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    for (int i = 0; i <n; i++)
    {
        if (i%2==0)
        {
            count_even++;
        }else {
            count_odd++;
        }
        
        printf("%d ", array[i]);
    }
    printf("\nCount even = %d\n", count_even);
    printf("\nCount odd = %d\n", count_odd);
  
    return 0;
}