#include <stdio.h>
int main()
{
	int a;
	
	printf ("Enter a value 1-7 to print the corresponding day and all the days after that: ");
	scanf ("%d", &a);
	
	switch (a)
	{
		case (1):
		{
			printf ("Monday");
		}
		
		case (2):
		{
			printf ("Tuesday");
		}
		
		case (3):
		{
			printf ("Wednesday");
		}
		
		case (4):
		{	
			printf ("Thursday");
		}
		
		case (5):
		{
			printf ("Friday");
		}
		
		case (6):
		{
			printf ("Saturday");
		}
		
		case (7):
		{
			printf ("Sunday");
			break;
		}
		
		default:
		{
			printf ("Please enter a valid number");
		}
	}
	
	return 0;
}
