#include<stdio.h>
int main(){
    int chock, pack, n;
    scanf("%d", &n);

    chock = n;
    pack = n;

    while (pack>=4)
    {
        chock = chock + (pack/4);
        pack = (pack/4) + (pack%4);
    }
    printf("Total Chocolate is %d", chock);
    
    return 0;
}