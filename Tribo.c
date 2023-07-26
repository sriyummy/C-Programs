#include <stdio.h>
int main()
{
	int num, i;
	int t1=0, t2=1, t3=1;
	int nt = t1 +t2+t3;
	
	printf ("Enter the number of places you want to print in Tribonacci series upto: ");
	scanf ("%d", &num);
	
	printf ("Series for the given number of terms: %d, %d, %d", t1, t2, t3);
	
	for (i=4; i<=num; ++i)
	{
		printf (", %d", nt);
		
		t1 = t2;
		t2 = t3;
		t3 = nt;
		
		nt = t1 + t2 + t3;
	}
	
	return 0;
}

