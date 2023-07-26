#include <stdio.h>
#include <stdbool.h>

int main() {
    int num1, num2, num3;
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if ((num1 + num2) == num3 || (num1 + num3) == num2 || (num2 + num3) == num1) {
        printf("It is possible to add two integers to get the third integer.");
    } else {
        printf("It is not possible to add two integers to get the third integer.");
    }
    return 0;
}
