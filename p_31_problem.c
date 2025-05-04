/*
    You need to take 4 distinct integer as input. Print the largest and smallest among them. Distinct means all of them are separate integers. None of them is equal to any other of them. 

    Sample Input: 
    123 435 34 612 
    Sample Output: 
    Largest = 612 
    Smallest = 34 

*/
#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Please Enter 4 Distinct Numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
    if (d > largest) largest = d;

    int smallest = a;
    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;
    if (d < smallest) smallest = d;

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;
}
