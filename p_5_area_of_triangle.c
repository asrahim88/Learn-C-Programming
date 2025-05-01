#include<stdio.h>
int main(){
    float base, height, area;

    // input base from the user
    printf("Please Enter the base of triangle: ");
    scanf("%f", &base);

    //input height from the user
    printf("\nPlease Enter the height of triangle: \n");
    scanf("%f", &height);

    area = 0.5*height*base;
    printf("The are of the tri angle is : %f", area);
    return 0;
}