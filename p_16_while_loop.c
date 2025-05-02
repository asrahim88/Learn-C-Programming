#include<stdio.h>
int main(){
    int i = 1;
    int sum = 0;
    while (i<=10)
    {
        /* code */
        printf("%d ",i);
        sum = sum + i;
        i++;
    }
    printf("\nThe sum of 1 to 10 number is %d", sum);
    
    return 0;
}