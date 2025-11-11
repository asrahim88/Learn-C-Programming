#include<stdio.h>
void printAray(int A[], int n, int i) {
    if(i==n){
        return;
    }
    printAray(A,n, i+1);
    if(i%2==0) {
        printf("%d ", A[i]);
    }

}
int main() {
    int n;
    scanf("%d", &n);

    int A[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", &A[i]);
    }
    printAray(A, n, 0);
    return 0;
}