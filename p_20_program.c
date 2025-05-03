#include<stdio.h>
int main()
{
    int p, w, sum=0;
    scanf("%d", &p);

    for(int i =1; i<=p; i++) {
        scanf("%d", &w);
        sum = sum + w;
    }
    printf("Total weight: %d", sum);
    return 0;
}