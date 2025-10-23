#include<stdio.h>
#include<string.h>
int main() {
    char str1[101], str2[101];

    scanf("%s %s", str1, str2);

    int length1 = strlen(str1);
    int length2 = strlen(str2);
    

    for (int i = 0; i <=length2; i++)
    {
        str1[length1 + i] = str2[i];
    }
    
    printf("%s %s",str1, str2);
    return 0;
}