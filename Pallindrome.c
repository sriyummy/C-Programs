#include <stdio.h>
int main()
{
	int num, num2, rev=0, r;
	
	printf ("Enter a number; ");
	scanf ("%d", &num);
	
	num2 = num;
	
	for ( ; num > 0; )
	{
		r = num % 10;
		rev = rev*10 + r;
		
		num = num/10;
	}
	
	if (num2 == rev)
	{
		printf ("Pallindrome confirmed!");
	}
	
	else
	{
		printf ("Not a pallindrome!");
	}
	
	
	return 0;
}
