#include <stdio.h>

int main() {
    float gigabytes, megabytes;
    printf("Enter the number of gigabytes: ");
    scanf("%f", &gigabytes);
    megabytes = gigabytes * 1024;
    printf("%.2f gigabytes = %.2f megabytes", gigabytes, megabytes);
    return 0;
}
