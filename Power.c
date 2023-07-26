#include <stdio.h>
#include <math.h>
int main()
{
	int x,y;
	int con;
	
	printf ("Enter a number for base value: ");
	scanf ("%d", &x);
	
	printf ("enter a number which will be the power: ");
	scanf ("%d", &y);
	
	con = pow (x,y);
	
	printf ("The power on x to y is: %d", con);
	
	return 0;
}
	
	
