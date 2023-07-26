#include <stdio.h>
int main()
{
	int num, sum, f, l;
	printf ("Enter a  4 digit number: ");
	scanf ("%d", &num);
	
	f = num/1000;
	l = num %10;
	
	sum = f + l;
	
	printf ("Sum = %d", sum);
	
	return 0;
}
