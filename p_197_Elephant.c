#include<stdio.h>
int main() {
    int e;
    scanf("%d", &e);

    if (e%5==0)
    {
        printf("%d", e/5);
    } else {
        printf("%d", (e/5)+1);
    }
    
    return 0;
}