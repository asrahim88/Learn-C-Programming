#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    scanf("%d", &N);
    
    int aray[N];
    for(int i = 0; i<N; i++) {
        scanf("%d", &aray[i]);
    }
    int X;
    scanf("%d", &X);
    
    if(aray[X-1] == 0) {
        aray[X-1] = 1;
    } else{
        aray[X-1] = 0;
    }
    
    for(int i = 0; i<N; i++) {
        printf("%d ", aray[i]);
    }
    return 0;
}
