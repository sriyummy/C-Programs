#include <stdio.h>
int main()
{
	int num, i, ev=0, od=1;
	
	for (i=1; num!=0; ++i)
	{
		printf ("Enter a random number, or 0 to terminate: ");
		scanf ("%d", &num);
		
		if (num%2 == 0)
		{
			if (ev<num)
			{
				ev = num;
			}
		}
		
		else
		{
			if(od<num)
			{
				od = num;
			}
		}
	}
	
	printf ("The largest even no is: %d and the largest odd number is: %d, from the list of your inputs", ev, od);
	
	return 0;
}
		
