#include<stdio.h>
int main() {
    int radius;
    printf("Please Enter Radius Number of Circle: \n");
    scanf("%d", &radius);

    double area = radius * radius * 3.141516;
    printf("area of circle is : %lf", area);
    return 0;
}