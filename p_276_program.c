#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    scanf("%d", &N);
    
    int aray[N];
    
    for(int i = 0; i<N; i++){
        scanf("%d", &aray[i]);
    }
    int max = aray[0];
    
    for(int i =0; i<N; i++) {
        if(aray[i] > max) {
            max = aray[i];
        }
    }
    
    for(int i = 0; i<N; i++) {
        printf("%d ",max - aray[i]);
    }
        return 0;
}
