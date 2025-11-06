#include<stdio.h>
void m(int* p) {
    int i = 0;
    for(i=0; i<5; i++) {
        printf("%d ", p[i]);
    }
}
int main() {
    int a[5] = {1, 2, 3};
    m(a);
    return 0;
}