#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int M;
    scanf("%d", &M);
    
    if(M%3==0) {
        printf("Yes");
    }else {
        printf("No");
    }
    return 0;
}
