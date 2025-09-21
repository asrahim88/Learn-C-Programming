#include<stdio.h>
#include<math.h>
int main() {
    float a, b, c;
    printf("Please Enter the side as a, b, c: ");
    scanf("%f%f%f", &a,&b,&c);

    if (a+b>c && a+c>b && b+c > a)  {
        float s = (a + b + c) / 2;
        float area = sqrt(s*(s-a)*(s-b)*(s-c));
        
        printf("The area of triAngle is %f", area);
    }else {
        printf("Invalid Input.");
    }
    return 0;
}