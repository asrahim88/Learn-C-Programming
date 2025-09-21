#include<stdio.h>
int main() {
    int radius;
    printf("Please Enter the radius: ");
    scanf("%d", &radius);

    float area;
    area = 3.1416*radius*radius;
    printf("The are of the circle is %f", area);
    return 0;
}