#include<stdio.h>
int main(){
    int N, k;
    scanf("%d %d", &N, &k);
    int array[N+5];
    int ans = 0;
    
    for (int i = 1; i <=N; i++)
    {
        scanf("%d", &array[i]);
    }
    int flag = array[k];

    for (int i = 1; i <=N; i++)
    {
       if (array[i]>=flag && array[i]>0)
       {
         ans++;
       }
       
    }
    printf("%d", ans);
    
    return 0;
}