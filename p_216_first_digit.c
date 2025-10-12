#include<stdio.h>
int main() {
    int A;
    scanf("%d", &A);
    
    char convertTs[4];
    
    sprintf(convertTs, "%d", A);
    
    char ch = convertTs[0];
    int number = ch - '0';
    
    if(number % 2 == 0)
        printf("ELEVEN");
    else
        printf("ODD");
    return 0;
}