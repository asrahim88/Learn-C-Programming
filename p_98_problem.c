#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);

    int array[200003];
    
    for (int i = 0; i <N; i++)
    {
        scanf("%d", &array[i]);
    }
    long long int ans= 0;
    for (int i = 1; i <N; i++)
    {
        if (array[i]<array[i-1])
        {
            ans += array[i-1]-array[i];
            array[i] = array[i-1];
        }
    }
    printf("%lld", ans);
    
    return 0;
}