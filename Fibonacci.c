#include <stdio.h>
int main()
{
	int num, i;
	int t1=0, t2=1;
	int nt = t1 +t2;
	
	printf ("Enter the number of places you want to print in Fibonacci series upto: ");
	scanf ("%d", &num);
	
	printf ("Series for the given number of terms: %d, %d", t1, t2);
	
	for (i=3; i<=num; ++i)
	{
		printf (", %d", nt);
		
		t1 = t2;
		t2 = nt;
		nt = t1 + t2;
	}
	
	return 0;
}
