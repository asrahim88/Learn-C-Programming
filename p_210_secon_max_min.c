#include<stdio.h>
int main() {
    int aray[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &aray[i]);
    }

    int max = aray[0];
    int second_max = aray[0];

    int min = aray[0];
    int second_min = aray[0];

    for (int i = 0; i <10; i++)
    {
        if (aray[i]>max)
        {
            second_max = max;
            max = aray[i];
        }
        else if (aray[i]<max && aray[i] > second_max)
        {
            second_max = aray[i];
        }

        if (aray[i]<min)
        {
            second_min = min;
            min = aray[i];
        }

        else if (aray[i] > min && aray[i] <second_min)
        {
            second_min = aray[i];
        }
    }

    printf("Max = %d\n", max);
    printf("Second_max = %d\n", second_max);
    printf("Min = %d\n", min);
    printf("Second_min = %d\n", second_min);

    
    
    return 0;
}