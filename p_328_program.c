#include<stdio.h>
int main() {
    int aray[4] ={1,2,3,4};
    int *p;
    p = aray + 3;
    *p = 5;

    printf("%d", aray[3]);
    return 0;
}