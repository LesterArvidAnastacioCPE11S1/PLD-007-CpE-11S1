#include <stdio.h>
#include <math.h>

#define PI 3.14159

void areaOfCircle(float radius) {
    float area = PI * radius * radius;
    printf("Area of the circle with radius %.2f is %.2f\n", radius, area);
}

void areaOfRectangle(float length, float width) {
    float area = length * width;
    printf("Area of the rectangle with length %.2f and width %.2f is %.2f\n", length, width, area);
}

void areaOfTriangle(float base, float height) {
    float area = 0.5 * base * height;
    printf("Area of the triangle with base %.2f and height %.2f is %.2f\n", base, height, area);
}

void areaOfSquare(float side) {
    float area = side * side;
    printf("Area of the square with side %.2f is %.2f\n", side, area);
}

int main() {
    int choice;
    float radius, length, width, base, height, side;
    char another;

    do {
        printf("\nArea Calculation Menu:\n");
        printf("(1) Area of Circle\n");
        printf("(2) Area of Rectangle\n");
        printf("(3) Area of Triangle\n");
        printf("(4) Area of Square\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the radius of the circle: ");
                scanf("%f", &radius);
                areaOfCircle(radius);
                break;
            case 2:
                printf("Enter the length of the rectangle: ");
                scanf("%f", &length);
                printf("Enter the width of the rectangle: ");
                scanf("%f", &width);
                areaOfRectangle(length, width);
                break;
            case 3:
                printf("Enter the base of the triangle: ");
                scanf("%f", &base);
                printf("Enter the height of the triangle: ");
                scanf("%f", &height);
                areaOfTriangle(base, height);
                break;
            case 4:
                printf("Enter the side length of the square: ");
                scanf("%f", &side);
                areaOfSquare(side);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                continue; // Skip asking for another computation
        }

        printf("Do you want to compute another area? (y/n): ");
        scanf(" %c", &another); // Notice the space before %c to consume any newline characters

    } while (another == 'y' || another == 'Y');

    printf("Exiting the program...\n");
    return 0;
}
