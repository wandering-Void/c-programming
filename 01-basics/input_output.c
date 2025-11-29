#include<stdio.h>

int main(void) {

    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%49s", name);  // Limit input to avoid buffer overflow

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello, %s!\n", name);
    printf("You are %d years old.\n", age);
}