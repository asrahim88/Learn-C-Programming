#include<stdio.h>
int main() {
    int base, height;
    printf("Please Enter the Base and Height of Triangle: ");
    scanf("%d %d", &base, &height);

    float area = .5 * base * height;
    printf("The area of triangle is %f", area);
    return 0; 
}