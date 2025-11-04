#include<stdio.h>
// Function1
char capital_to_small(char a) {
    return a+32; 
}

// Function2
void capital_to_small2(char a) {
    printf("Function type ->2 = %c\n", a+32); 
}

// Function3
char capital_to_small3() {
    char ch;
    scanf(" %c", &ch);
    return ch+32; 
}


// Function4
void capital_to_small4() {
    char ch;
    scanf(" %c", &ch);
    printf("Function type ->4 = %c\n", ch+32); 
}
int main() {
    char ch;
    scanf("%c", &ch);

    // Function1
    char res1 = capital_to_small(ch);
    printf("Function type ->1 = %c\n", res1);
    
    // Function2
    capital_to_small2(ch);
    
    // Function3
    char res3 = capital_to_small3();
    printf("Function type ->3 = %c\n", res3);
    
    // Function4
    capital_to_small4(ch);
    return 0;
}