#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int flag = 0;
    for (int i = 1; i <=N; i++)
    {
        if(i%2==0) {
            printf("%d\n", i);
            flag = 1;
        }
    }

    if (flag==0)
    {
        printf("%d", -1);
    }
    
    return 0;
}