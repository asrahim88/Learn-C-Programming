/*
     You will be given a number as input. You will have to find the number of digits in that number. You will have to use loops to solve this problem as the input can have any number of digits. [Hint: Use the modulus operator. You can extract last digit from any number by using %10 operation on the number.] 
    For example, 
    Sample Input: 
    2346167 
    Sample Output: 
    7 digits

*/
#include<stdio.h>
int main(){
    long long int n;
    scanf("%lld", &n);
    long long int last_digit = 0;
    long long int total_digit = 0;

    while (n !=0)
    {
        last_digit = n%10;
        total_digit++;
        n = n/10;
    }
    printf("%d digits", total_digit);
    return 0;
}