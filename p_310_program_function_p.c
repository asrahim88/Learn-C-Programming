#include<stdio.h>
int char_to_ascii(char a) {
    int res = a;
    return res;
    
}

void char_to_ascii_2(char a) {
    printf("Function type -> 2 = %d\n", a);
}

int char_to_ascii_3() {
    char b;
    scanf(" %c", &b);

    int res = b;
    return res;
}

void char_to_ascii_4() {
    char a;
    scanf(" %c", &a);

    int res = a;
    printf("Function type -> 4 = %d\n", res);
}

int main() {
    char a;
    scanf("%c", &a);
    
    int ascii = char_to_ascii(a);
    
    printf("Function type -> 1 = %d\n", ascii);
   
    char_to_ascii_2(a);
    
    int result = char_to_ascii_3();
    printf("Function type -> 3 = %d\n", result);
    
    char_to_ascii_4();

    return 0;
}