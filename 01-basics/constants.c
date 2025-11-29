#include<stdio.h>

int main(void) {

    const float PI = 3.14159;

    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    float area = PI * radius * radius;
    printf("Area of the circle with radius %d is: %.2f\n", radius, area);
}