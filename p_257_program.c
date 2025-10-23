#include<stdio.h>
int main() {
    char s[1000001];
    scanf("%s", s);

    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        int number = s[i] - 48;
        count += number;
    }
    printf("%d", count);
    return 0;
}