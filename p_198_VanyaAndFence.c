#include<stdio.h>
int main() {
    int N, h;
    scanf("%d %d", &N, &h);

    int sum = 0;
    
    for (int i = 0; i < N; i++)
    {
        int f;
        scanf("%d", &f);

        if (f<=h)
        {
            sum +=1;
        }else {
            sum +=2;
        }
    }

    printf("%d ", sum);
    
    return 0;
}