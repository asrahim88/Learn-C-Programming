#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if (a>0 && b>0 && c>0) {
        if (a+b>c)
        {
            /* code */
            printf("YES");
        } else if (a+c> b)
        {
            /* code */
            printf("YES");
        }else if (b+c>a)
        {
            /* code */
            printf("YES");
        } else {
            printf("NO");
        }
    } else {
        printf("NO");
    }
    return 0;
}