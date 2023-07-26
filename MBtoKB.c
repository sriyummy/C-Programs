#include <stdio.h>

int main() {
    float megabytes, kilobytes;
    printf("Enter the number of megabytes: ");
    scanf("%f", &megabytes);
    kilobytes = megabytes * 1024;
    printf("%.2f megabytes = %.2f kilobytes", megabytes, kilobytes);
    return 0;
}
