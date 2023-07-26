#include <stdio.h>

void leapCheck (int n);

int main()
{
    int n;
    
    printf ("Enter a year to check whether it is a leap year or not: ");
    scanf ("%d", &n);
    
    leapCheck (n);
    
    return 0;
}

void leapCheck (int n)
{
    if ((n%4 == 0 && n%100 != 0)||(n%400 == 0))
	{
		printf ("It's a leap year!");
	}
	
	else
	{
		printf ("It's not a leap year");
	}
}
