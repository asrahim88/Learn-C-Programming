#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int money;
    scanf("%d", &money);
    
    if(money>= 1000) {
        printf("Three Kacchi");
    } else if (money >=500) {
        printf("One Large Pizza");
    } else if(money>=250) {
        printf("Three Small Burger");
    } else if (money>=100) {
        printf("Three Fuchka");
    }else {
        printf("Nothing");
    }
    return 0;
}
