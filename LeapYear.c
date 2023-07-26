#include <stdio.h>
int main()
{
	int y;
	
	printf ("Enter a year to check if it's a leap year: ");
	scanf ("%d", &y);
	
	if ((y%4 == 0 && y%100 != 0)||(y%400 == 0))
	{
		printf ("It's a leap year!");
	}
	
	else
	{
		printf ("It's not a leap year");
	}
	
	return 0;
}
	
