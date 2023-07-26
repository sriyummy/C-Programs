#include <stdio.h>

int main() {
    float bytes, kilobytes;
    printf("Enter the number of bytes: ");
    scanf("%f", &bytes);
    kilobytes = bytes / 1024;
    printf("%.2f bytes = %.2f kilobytes", bytes, kilobytes);
    return 0;
}
