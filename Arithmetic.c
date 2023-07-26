#include <stdio.h>
int main()
{
	int a, b, op;
	
	printf ("Enter two numbers: ");
	scanf ("%d%d", &a, &b);
	
	printf ("Enter 1 to add. \nEnter 2 to Subtract. \nEnter 3 to Multiply. \nEnter 4 to find Quotient. \nEnter 5 to find Remainder.");
	scanf ("%d", &op);
	
	switch (op)
	{
		case (1):
		{
			printf ("%d", a+b);
			break;
		}
		
		case (2):
		{
			printf ("%d", a-b);
			break;
		}
		
		case (3):
		{
			printf ("%d", a*b);
			break;
		}
		
		case (4):
		{
			printf ("%d", a/b);
			break;
		}
		
		case (5):
		{
			printf ("%d", a%b);
			break;
		}
		
		default:
		{
			printf ("Please enter a valid choice :(");
		}
	}
	return 0;
}
		
		
