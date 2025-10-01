#include<stdio.h>
int main() {
    int a,b,c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a>b && a>c && a>d)
    {
        printf("Largest = %d", a);
    } else if (b>a && b>c && b>d) {
        printf("Largest = %d", b);
    } else if(c >a && c>b && c>d) {
        printf("Largest = %d", c);
    }else {
        printf("Largest = %d", d);
    }
    printf("\n");
    if (a<b && a<c && a<d){
        printf("Smallest = %d", a);
    }else if (b < a && b<c && b<d){
        printf("Smallest = %d", b);
    }else if (c <a && c<b && c< d) {
        printf("Smallest = %d", c);
    }else {
        printf("Smallest = %d", d);
    }
    
    
    
    return 0;
}