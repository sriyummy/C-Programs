#include <stdio.h>

int main() {
    float angle1, angle2, angle3;
    printf("Enter the value of first angle: ");
    scanf("%f", &angle1);
    printf("Enter the value of second angle: ");
    scanf("%f", &angle2);
    angle3 = 180 - angle1 - angle2;
    printf("The value of third angle is %.2f degrees.", angle3);
    return 0;
}
