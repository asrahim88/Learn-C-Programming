/*
    Take two integers as input and print their LCM as the output. We know, LCM of two numbers is the least common multiple of two numbers. You can use the logic from Question no. 6 to solve this problem. 
    Sample Input 1: 
    12 18 
    Sample Output 1: 
    The LCM of 12 and 18 is 36. 
    Explanation: 
    Since 36 is the least number which is divisible by both 12 and 18 so 36 is the output. 

*/
#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d %d", &N, &M);
    int num1=N, num2=M, num3;
    while(num2>0)
    {
        num3 = num1 % num2;
        num1 = num2;
        num2 = num3;
    }
    printf("The LCM of %d and %d is %d.", N, M, N*M/num1);
    return 0;
}
