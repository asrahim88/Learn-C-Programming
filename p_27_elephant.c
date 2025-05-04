#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int step;
    if (x%5==0)
    {
        /* code */
        step = x/5;
    }else {
        step = (x/5)+1;
    }
    printf("%d", step);
    
    return 0;
}