#include<stdio.h>
int main(){
    int n, f,h;
    scanf("%d %d", &n, &f);
    int distance = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &h);
        if (h>f)
        {
            distance +=2;
        }else {
            distance +=1;
        }
    }
    printf("%d", distance);
    return 0;
}