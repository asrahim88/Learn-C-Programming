#include<stdio.h>
int main() {
    int i = 1;
    while (i!=0)
    {
        int X;
        scanf("%d", &X);

        if(X == 1999) {
            printf("Correct\n");
            break;
        }else {
            printf("Wrong\n");
        }
    }
    
    return 0;
}