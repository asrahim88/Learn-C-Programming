#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int aray[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", &aray[i]);
    }

    int i = 0;
    int j = n-1;

    while (i<j)
    {
        int temp;
        temp = aray[i];
        aray[i] = aray[j];
        aray[j] = temp;
        i++;
        j--;
    }

    for(int i =0; i<n; i++) {
        printf("%d ", aray[i]);
    }

    

    return 0;
}