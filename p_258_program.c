#include<stdio.h>
int main() {
    char s[] = "hello\0world";
    printf("%s", s);
    return 0;
}