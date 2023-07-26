#include <stdio.h>
int main()
{
	int a;
	
	printf ("Enter your age: ");
	scanf ("%d", &a);
	
	if (a < 18)
	{
		printf ("You are a minor");
	}
	
	else
	{
		printf ("You are an adult");
	}
	
	return 0;
}
