#include<stdio.h>
int main() {
    int x,y,z;
    scanf("%d %d %d", &x,&y,&z);

    if (x>y && x >z) {
        printf("%d is big number", x);
    }
    else if (y>x && y>z) {
        printf("%d is big number", y);
    }
    else if (z>x && z>y) {
        printf("%d is big number", z);
    }
    else if (x==y && x>z) {
        printf("%d and %d are equal but grater than %d", x,y,z);
    }
    else if (y==z && y > x) {
        printf("%d and %d are equal but greater than %d", y,z, x);
    } 
    else if (x==z && x>y) {
        printf("%d and %d are equal but greater than %d", x,z,y);
    } else {
        printf("They are equal.");
    }
    return 0;
}
