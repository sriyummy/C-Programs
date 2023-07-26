#include <stdio.h>

int main()
{
    int m1, m2, m3, avg;

    printf ("Enter the student's marks in 3 subjects to find out average: ");
    scanf ("%d%d%d", &m1, &m2, &m3);

    if ((m1>100) || (m2>100) || (m3>100))
    {
        printf ("Marks in each subject can be between 1-100 only!");
    }

    avg = (m1+m2+m3)/3;
    printf ("The Average mark of the student is: %d", avg);

    return 0;


}