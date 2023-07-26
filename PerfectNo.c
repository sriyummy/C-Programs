#include <stdio.h>
int main()
{
	int num, sum=0, i;
	
	printf ("Enter a number: ");
	scanf ("%d", &num);
	
	for (i = 1; i<=(num+1)/2; i++)
	{
		if (num % i == 0)
		{
			sum = sum +i;
		}
	}
	
	if (num == sum)
	{
		printf ("Perfect Number!");
	}
	
	else
	{
		printf ("Not a perfect number :(");
	}
	
	return 0;
}
