#include<stdio.h>
void show_numbers() {
    int N;
    scanf("%d", &N);
    for(int i =1; i<=N; i++) {
        if(i<N) {
            printf("%d ", i);
        }else {
            printf("%d",i);
        }
    }
}
int main() {
    show_numbers();
    return 0;
}