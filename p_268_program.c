#include<stdio.h>
#include<string.h>

int main() {
   char S[10001];
   scanf("%s", S);

   int len = strlen(S);

   int fre[26] = {0};

   for(int i = 0; i<len; i++) {
        int value = S[i] - 'a';
        fre[value]++; 
   }

   
   for (int i = 0; i < 26; i++) {
        if (fre[i] > 0) {
            printf("%c : %d\n", i + 'a', fre[i]);
        }
    }
 
   
    return 0;
} 