/*
    Take two integers as input and print their GCD as the output. We know, GCD of two numbers is the greatest common divisor of two numbers. You can use the logic from Question no. 6 to solve this problem. 
    Sample Input 1: 
    12 18 
    Sample Output 1: 
    The GCD of 12 and 18 is 6. 
    Explanation: 
    Since 6 is the largest number which divides both 12 and 18 so 6 is output.

*/
#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d %d", &N, &M);
    int num1=N, num2=M, num3;
    while(num2>0)
    {   num3 = num1%num2;
        num1 = num2;
        num2 = num3;
    }
    printf("The GCD of %d and %d is %d.", N, M, num1);
    return 0;
}
