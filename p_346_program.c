#include<stdio.h>
void printText(int n){
    if (n==0)
    {
        return ;
    }
    printf("I love Recursion\n");
    printText(n-1);
}
int main() {
    int n;
    scanf("%d", &n);
    printText(n);
    return 0;
}