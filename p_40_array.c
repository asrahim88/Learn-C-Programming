#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int array[N];
    for (int i = 0; i < N; i++)
    {
        array[i] = i;
    }

     for (int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
