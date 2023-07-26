#include <stdio.h>
int main()
{
	int hr1, min1, sec1;
	int hr2, min2, sec2;
	int sumsec, summin, sumhr;
	printf ("Enter the values of the first time in the format of H--M--S");
	scanf ("%d%d%d", &hr1, &min1, &sec1);
	
	printf ("Enter the values of the secind time in the format of H--M--S");
	scanf ("%d%d%d", &hr2, &min2, &sec2);
	
	sumsec = sec1 + sec2;
	summin = min1 + min2;
	sumhr = hr1 + hr2;
	
	if (sumsec >59)
	{
		++summin;
		sumsec = sumsec-60;
	}
	
	if (summin > 59)
	{
		++sumhr;
		summin = summin-60;
	}
	
	printf ("The sum of times is: %d Hours %d Minutes %d Seconds", sumhr, summin, sumhr);
	
	return 0;
}
