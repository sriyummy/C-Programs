#include <stdio.h>
int main()
{
	int num, rev=0, r;
	
	printf ("Enter a number: ");
	scanf ("%d", &num);
	
	do
	{
		r = num % 10;
		rev = (rev*10) + r;
		
		num = num/10;	
	}
	
	while (num>0);
	
	printf ("Reverse of your input is: %d", rev);
	
	return 0;
}


