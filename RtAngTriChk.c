#include <stdio.h>

int main()
{
    int s1, s2, s3;

    printf ("Enter the three sides of the triangle: ");
    scanf ("%d%d%d", &s1, &s2, &s3);

    if ((s1*s1 + s2*s2 == s3*s3) || (s2*s2 + s3*s3 == s1*s1) || (s3*s3 + s1*s1 == s2*s2))
    {
        printf ("The triangle is right angled!");
    }
    else
    {
        printf ("The triangle is not right angled!");
    }

    return 0;
}