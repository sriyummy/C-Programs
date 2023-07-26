#include <stdio.h>
#include <stdbool.h>

int main() {
    int num1, num2, sum, diff;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    diff = num1 - num2;
    if (num1 == 6 || num2 == 6 || sum == 6 || diff == 6 || -diff == 6) {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}
