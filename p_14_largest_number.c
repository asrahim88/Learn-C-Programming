#include<stdio.h>
int main(){
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (A > B && A > C){
        printf("A is bigger.");
    } else if (B>A && B>C) {
        printf("B is bigger");
    } else if (C>A && C > B) {
        printf("C is bigger.");
    } else if (A==B && A>C) {
        printf ("A and B is bigger.");
    } else if (A == C && A > B) {
        printf("A and C is Bigger");
    } else if (B==C && B > A) {
        printf("B and C is bigger");
    } else {
        printf(" They are all equal.");
    }
    return 0;
}