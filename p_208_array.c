#include<stdio.h>
int main() {
    int aray[10];

    for (int i = 0; i <10; i++)
    {
        scanf("%d", &aray[i]);
    }

    for (int i = 0; i <10; i++)
    {
        printf("%dth position = %d\n",i, aray[i]);
    }
    
    return 0;
}