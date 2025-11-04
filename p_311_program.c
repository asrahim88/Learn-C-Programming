#include<stdio.h>
// function1
char small_to_capital(char a) {
    char cap = a-32;
    return cap;
}


// function2
void small_to_capital2(char a) {
    char cap = a-32;
    printf("Function type -> 2 =%c\n", cap);
}


// function3
char small_to_capital3() {
    char a;
    scanf(" %c", &a);

    char cap = a-32;
    return cap;
}

// function4
void small_to_capital4() {
    char a;
    scanf(" %c", &a);

    char cap = a-32;
    printf("Function type -> 4 =%c\n", cap);
}


int main() {
    char a;
    scanf("%c", &a);

    // function 1
    char result = small_to_capital(a);
    printf("Function type -> 1 =%c\n", result);
    
    // function 2
    small_to_capital2(a);
    
    // function 3
    char res = small_to_capital3();
    printf("Function type -> 3 =%c\n", res);
    
    // function 4
    small_to_capital4();
    return 0;
}