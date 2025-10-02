#include<stdio.h>
int main() {
    int aray[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &aray[i]);
    }

    int max = aray[0];
    int min = aray[0];

    for (int i = 0; i <10; i++)
    {
        if (aray[i]>max)
        {
            max = aray[i];
        }

        if (aray[i]<min)
        {
            min = aray[i];
        }
    }

    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    
    
    return 0;
}