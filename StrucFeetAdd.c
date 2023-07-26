#include <stdio.h>
#include <string.h>

struct measure
{
    int feet;
    int inch;
};

int main()
{
    struct measure d1, d2, dist;
    int ex;

    printf("Enter distance 1 in feet and inches: ");
    scanf("%d%d", &d1.feet, &d1.inch);
    
    printf("Enter distance 2 in feet and inches: ");
    scanf("%d%d", &d2.feet, &d2.inch);
    
    dist.feet = d1.feet + d2.feet;
    dist.inch = d1.inch + d2.feet;
    
    if (dist.inch > 12)
    {
        ex = (dist.inch)/12;
        dist.feet+=ex;
        dist.inch %=12;
    }

    printf ("Number of feet is %d and number of inches is %d!", dist.feet, dist.inch);

    return 0;
}

