#include<stdio.h>
void printDigit(int x) {
    if (x == 0)
    {
        return ;
    }
    printDigit(x/10);
    int r = x%10;
    printf("%d ", r);
}
int main() {
    int T;
    scanf("%d", &T);

    for(int i =0; i<T; i++) {
        int x;
        scanf("%d", &x);
        if (x==0)
        {
            printf("0");
        }
        
        printDigit(x);
        printf("\n");
    }
    return 0;
}