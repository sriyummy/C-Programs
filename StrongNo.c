#include <stdio.h>
int main()
{
	int num, nnum, i, r, fact=1, sum=0;
	
	printf ("Enter a number: ");
	scanf ("%d", &num);
	
	nnum = num;
	
	while (nnum>0)
	{
		r = nnum%10;
		
		for (i = 1; i<=r; ++i)
		{
			fact = fact*i;
		}
		
		sum = sum+fact;
		nnum = nnum/10;
		
		fact = 1;
	}
	
	if (num ==sum)
	{
		printf ("Strong Number Confirmed!");
	}
	else
	{
		printf ("Not a Strong Number!");
	}
	
	return 0;
}
