#include <stdio.h>
int main()
{
	int num, sum =0, d, num2;
	
	printf ("Enter a number: ");
	scanf ("%d", &num);
	
	num2 = num;
	
	for ( ; num2>0 ; )
	{
		d = num2 % 10;
		sum = sum + (d*d*d);
		num2 = num2/10;
	}
	
	if (num == sum)
	{
		printf ("Armstrong Number confirmed!");
	}	
	else
	{
		printf ("Not an armstrong number!");
	}
	
	return 0;
}
