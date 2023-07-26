#include <stdio.h>

int main() {
    float number, absolute_value;
    printf("Enter a number: ");
    scanf("%f", &number);
    if(number < 0) {
        absolute_value = -number;
    } else {
        absolute_value = number;
    }
    printf("The absolute value of %.2f is %.2f", number, absolute_value);
    return 0;
}
