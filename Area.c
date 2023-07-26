#include <stdio.h>

int main() {
    int choice;
    float base, height, radius, length, width, area;
    printf("Choose a shape to find its area:\n");
    printf("1. Triangle\n");
    printf("2. Circle\n");
    printf("3. Rectangle\n");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of the triangle is %.2f", area);
            break;
        case 2:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("Area of the circle is %.2f", area);
            break;
        case 3:
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of the rectangle is %.2f", area);
            break;
        default:
            printf("Invalid choice!");
            break;
    }
    return 0;
}
