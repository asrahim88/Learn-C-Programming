#include<stdio.h>
#include<math.h>

int main(){
    float a, b, c, s, area;
    printf("Please Enter the length of the side a: ");
    scanf("%f", &a);

    printf("Please Enter the length of the side b: ");
    scanf("%f", &b);
    
    printf("Please Enter the length of the side c: ");
    scanf("%f", &c);

    // calculate the semi-perimeter
    s = ( a + b + c ) / 2;

    area = sqrt(s*(s-a) * (s-b) * (s-c));
    printf("The are of the triangle is: %.2f", area);

    return 0;
}