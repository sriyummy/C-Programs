#include <stdio.h>
int main()
{
	char op;
	int a, b;
	
	printf ("Enter two numbers: ");
	scanf ("%d%d", &a, &b);
	
	printf ("Enter a  to add. \nEnter b to subtract. \n Enter c to multiply. \nEnter d to find quotient. \nEnter e to find Remainder");
	scanf ("%c", &op);
	
	switch (op)
	{
		case ('a'):
		{
			printf ("%d", a+b);
			break;
		}
		
		case ('b'):
		{
			printf ("%d", a-b);
			break;
		}
		
		case ('c'):
		{
			printf ("%d", a*b);
			break;
		}
		
		case ('d'):
		{
			printf ("%d", a/b);
			break;
		}
		
		case ('e'):
		{
			printf ("%d", a%b);
			break;
		}
		
		default:
		{
			printf ("Please enter a valid input");
		}
	}
	return 0;
}
