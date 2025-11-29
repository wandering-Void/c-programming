#include<stdio.h>

int main(void) {

    int a = 15;
    float b;
    char c = 'C';

    // Implicit type casting from int to float
    b = a;
    printf("Implicit type casting: a = %d to b = %.2f\n", a, b);

    // Explicit type casting from float to int
    b = 9.78;
    a = (int)b;
    printf("Explicit type casting: b = %.2f to a = %d\n", b, a);

    // Implicit type casting from char to int
    int charToInt = c;
    printf("Implicit type casting: c = '%c' to charToInt = %d\n", c, charToInt);

    // Explicit type casting from int to char
    int intToChar = 68;
    c = (char)intToChar;
    printf("Explicit type casting: intToChar = %d to c = '%c'\n", intToChar, c);
}