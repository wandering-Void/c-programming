#include<stdio.h>

int main(void) {
    int integerVar = 10;
    float floatVar = 5.5;
    char charVar = 'A';

    printf("sizeof integer: %zu bytes\n", sizeof(integerVar));
    printf("sizeof float: %zu bytes\n", sizeof(floatVar));
    printf("sizeof char: %zu bytes\n", sizeof(charVar));

    return 0;
}