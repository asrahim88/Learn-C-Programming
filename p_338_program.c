#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int is_palindrome(char S[]) {
    int len = strlen(S);
    
    int flag = 1; 
    for(int i = 0, j = len-1; i<len, j>i; i++, j--) {
        if(S[i] != S[j]) {
            flag= 0;
            break;
        }
    }
    if (flag == 1)
    {
        return 1;
    }else {
        return 0;
    }
    
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char S[1000];
    scanf("%s", S);
    int result = is_palindrome(S);
    if(result == 1) {
        printf("Palindrome");
    }else {
        printf("Not Palindrome");
    }
    return 0;
}
