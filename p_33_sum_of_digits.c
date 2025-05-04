/*
    This time you need to find the sum of the digits of the input. So look at the sample input output. 
    Sample Input: 
    2346167 
    Sample Output: 
    29 
    Explanation: Since, the sum of the digits is 2+3+4+6+1+6+7 = 29. So the output is 29. 

*/
#include<stdio.h>
int main(){
    long long int n;
    scanf("%lld", &n);
    long long int last_digit;
    long long int sum_of_digits = 0;

    while (n !=0)
    {
        last_digit = n%10;
        sum_of_digits += last_digit;
        n=n/10;
    }
    printf("sum = %d", sum_of_digits);
    return 0;
}