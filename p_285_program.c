#include<stdio.h>
int main() {
    int n, x;
    scanf("%d %d", &n, &x);
    
    int aray[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", &aray[i]);
    }
    int flag = 0;
    for(int i = 0; i<n-1; i++) {
        for(int j = 1+i; j<n; j++) {
            if(aray[i]+ aray[j] == x)
            {
                flag++;
                break;
            }
        }
    }

    if(flag>0) {
        printf("Yes");
    }else {
        printf("No");
    }
    return 0;
}