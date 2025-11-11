#include<stdio.h>
void printAray(int aray[], int n, int i) {
    if(i == n) 
        return;
    printf("%d\n", aray[i]);
    printAray(aray, n, i+1);
}
int main() {
    int n;
    scanf("%d", &n);

    int aray[n];
    for(int i =0; i<n; i++) {
        scanf("%d", &aray[i]);
    }

    printAray(aray,n, 0);
    return 0;
}