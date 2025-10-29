#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    scanf("%d", &T);
    
    for(int i = 0; i<T; i++) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        
        int workTime = (M1 * D) / M2;
        int ans = D - workTime;
        printf("%d\n", ans);
        
    }
    return 0;
}
