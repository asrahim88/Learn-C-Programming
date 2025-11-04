#include<stdio.h>
char small_to_capital(char a) {
    char cap = a-32;
    return cap;
}
int main() {
    char a;
    scanf("%c", &a);

    char result = small_to_capital(a);
    printf("%c", result);

    return 0;
}