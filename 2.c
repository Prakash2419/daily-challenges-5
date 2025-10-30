#include <stdio.h>
int main() {
    float length, breadth, side, base, height, radius;
    
    scanf("%f%f", &length, &breadth);
    printf("Area of Rectangle = %.2f\n", length * breadth);

    scanf("%f", &side);
    printf("Area of Square = %.2f\n", side * side);

   
    scanf("%f%f", &base, &height);
    printf("Area of Triangle = %.2f\n", 0.5 * base * height);

    scanf("%f", &radius);
    printf("Area of Circle = %.2f\n", 3.1416 * radius * radius);

    return 0;
}