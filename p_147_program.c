#include<stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int res = (n/2)+1;

    if (res<=k)
    {
        /* code */
        int oddPosition = (2*k)-1;
        printf("the positioning odd number is %d", oddPosition);
    } else {
        int evenPosition =(res-k);
        int mainRes = evenPosition * 2;
        printf("the positioning even number is %d", mainRes);
    }
    
    
    return 0;
}