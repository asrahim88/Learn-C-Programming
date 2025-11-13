#include<stdio.h>
int countVowel(char s[], int i) {
    if(s[i] == '\0'){
        return 0;
    }
    int count = countVowel(s, i+1);
    if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U') {
        count++;
    }
    return count;
}
int main() {
    char s[201];
    fgets(s,201, stdin);
    int result = countVowel(s, 0);
    printf("%d", result);
    return 0;
} 