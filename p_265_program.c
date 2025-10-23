#include<stdio.h>
#include<string.h>
int main() {
    char str1[101], str2[101];
    scanf("%s %s", str1, str2);
    int value = strcmp(str1, str2);

    if(value<0)
        printf("Small");
    else if(value == 0) 
        printf("they are qual");
    else 
        printf("Big");
    return 0;
}