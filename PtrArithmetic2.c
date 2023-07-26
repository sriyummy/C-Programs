#include <stdio.h>

int main()
{
    int a=5;
    int *p1 = &a;
    printf ("Value od a is 5");
    *p1+=5;
    printf ("Adding 5 to pointer value of a gives : %p", p1);

    return 0;
}

